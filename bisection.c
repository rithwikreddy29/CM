#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)-(4*x)-9)
int main(void)
{
 int itr,maxitr;
 float a,b,x,x1,i,allerr=0.0001;
 printf("enter the maxitr values :"); 
 scanf("%d",&maxitr);
 for(i=0;i<100;i++)
 {
 	if(f(i)*f(i+1)<0)
 	{
 		a=i;
 		b=i+1;
 		printf("values are %f %f\n",a,b);
 	}
 	printf("\t a \t \t b \t \t x \t \t f(x)\n");
 }
 x=(a+b)/2;
 printf("1 \t %f\t%f\t%f\t%lf\t\n",a,b,x,f(x));
 for(itr=0;itr<=maxitr;itr++)
 {
   	if((f(x)*f(a))<0)
  	{
   		b=x;
  	}
 	else
   	{
   		a=x;
   	}
  	x1=(a+b)/2;
  	printf("%d\t %f\t%f\t%f\t%lf\t\n",itr+2,a,b,x1,f(x1));  
  	if(fabs(x-x1)<=allerr )
  	{
    		printf("the points are: %f\n",x1);
    		break;
 	}
    	else
    		x=x1;
 } 
 if(itr>maxitr)
	printf ("number of itr are not sufficient");
	return 0;	
}


