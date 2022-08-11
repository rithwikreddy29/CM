#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) 1/(1+(x*x))
int main()
{
  float a,b,n,h,x; 
  int ch,i;
  printf("enetr the value of lower value=");
  	scanf("%f",&a);
  printf("enetr the value of upper limit= ");
  scanf("%f",&b);
  printf("enetr the value of sub intervals=");
  scanf("%f",&n);
  do{
     h=(b-a)/n;
    float sum=0;
  
  	printf("\n1.trapezoidal\n2.siimpsons1/3\n3.simpsons3/8\n");
  	printf("enter choice :");
  	scanf("%d",&ch);
  	switch(ch)
  	{
  
   case 1:
           for(int i=1; i<=n-1; i++)
         {
            x=a+(i*h);
           sum=sum+2*f(x);
         } 
          sum=sum+(f(a)+f(b));
          sum=(h/2)*sum;
          printf("\nthe value of integral trapezoinal=%f",sum);
         break;
  case 2:
  	 
   	 for(int i=1; i<=n-1; i++)
   	{ 
     	 x=a+(i*h);
     	 if ((i%2)==0)
     	 {
      	  sum=sum+2*f(x);
     	 } 
    	 else
    	 {
       	 sum=sum+4*f(x);
    	 }  
       }     
 	  sum=sum+f(a)+f(b);
  	 sum=(h/3)*sum; 
  	 printf("\nthe value of integral simpsons1/3=%f",sum);
  	break;	
  case 3:
  	  
         for(int i=1; i<=n-1; i++)
         {
           x=a+(i*h);
          if ((i%3)==0)
          {
           sum=sum+2*f(x);
          } 
         else
         {
           sum=sum+3*f(x);
          }  
       }     
       sum=sum+f(a)+f(b);
        sum=(3*h/8)*sum;
     printf("\nthe value of integral simpsons3/8=%f",sum);
     break;
     
  }
 }while(ch!=4);
}


