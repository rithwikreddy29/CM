#include<stdio.h>
#include<math.h>
#define f(x) (x*sin(x)-1)
#define g(x) (x*cos(x)+sin(x))
int main(void)
{
 int itr=1,maxitr=10;
 float x,x0,x1,i,h,allerr=0.201;
 printf("enter values of x0:");
 scanf("%f",&x0);
 
  for(itr=0;itr<=maxitr;itr++)
 {
       h=f(x0)/g(x0);
       x1=x0-h;
        printf("%f\t%f\t\n",x0,x1);  
 	if(fabs(x1-x0)<allerr )
  	{
    		printf("the points are: %f\n",x1);
    		break;
 	}
    	else
    		x0=x1;
    	itr=itr+1;	
 } 
 if(itr>maxitr)
	printf ("number of itr are not sufficient");
	return 0;	
}

   
 
