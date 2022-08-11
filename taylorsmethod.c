//c program for taylors method
#include<stdio.h>
#include<math.h>
  
/*#define f(x,y)     3*exp(x)+2*y
#define f1(x,y)    3*exp(x)+f(x,y)
#define f2(x,y)    3*exp(x)+f1(x,y)
#define f3(x,y)    3*exp(x)+f2(x,y)*/

#define f(x,y)  (x-(y*y))
#define f1(x,y) (1-2*y*f(x,y))
#define f2(x,y)  (-2*((y*f1(x,y))+(f(x,y)*f(x,y))))

int main(void){
   float x[10],y[10],h,a,n;
   int k;
   printf("Enter initial values and step size:");
   scanf(" %f %f %f" , &x[0],&y[0],&h);
   printf("Enter a:");
   scanf(" %f",&a);
   n=(a-x[0])/h;
   for(k=1;k<=n;k++)
   {
       y[k]=y[k-1]+h*f(x[k-1],y[k-1])+((h*h)/2)*f1(x[k-1],y[k-1])+((h*h*h)/6)*f2(x[k-1],y[k-1]);
       x[k]=x[k]+h;  
       if(k==1)
           printf(" x[%d]=%f\t y[%d]=%f\n", k-1,x[k-1],k-1,y[k]);
       else
           printf(" x[%d]=%f\t y[%d]=%f\n", k-1,x[k-2],k-1,y[k]);
   }
   putchar('\n');
   return 0;   
}
