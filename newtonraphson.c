#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x*x)+(2*x*x)-(16*x)+5)
#define g(x) ((x*x*x)+(4*x)-16)
int main(void)
{
 int itr=1,maxitr;
 float x,x0,x1,i,h,allerr=0.201;
 printf("enter the maxitr values :"); 
 scanf("%d",&maxitr);
 printf("enter values of x0:");
 scanf("%f",&x0);
 
  for(itr=0;itr<=maxitr;itr++)
 {
       h=f(x0)/g(x0);
       x1=x0-h;
        printf("%f\t%f\t%lf\t\n",x0,x1,f(x1));  
 	if(fabs(x1-x0)<allerr )
  	{
    		printf("the points are: %f\n",x1);
    		break;
 	}
    	else
    		x0=x1;
    		
 } 
 if(itr>maxitr)
	printf ("number of itr are not sufficient");
	return 0;	
}

   
 
