#include<stdio.h>
#include<math.h>
#define f(x) ((x)*exp(x)-cos(x))
int main(void)
{
 int itr,maxitr;
 float a,b,x,x1,i,allerr=0.0001;
 printf("enter the maxitr values :"); 
 scanf("%d",&maxitr);
 printf("enter values of a and b : ");
 scanf("%f %f",&a,&b);
 x=((a*f(b))-(b*f(a)))/(f(b)-f(a));
 printf("%f\t%f\t%f\t%lf\t\n",a,b,x,f(x));
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
  	x1=((a*f(b))-(b*f(a)))/(f(b)-f(a));
  	printf("%f\t%f\t%f\t%lf\t\n",a,b,x1,f(x1));  
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
