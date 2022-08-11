//c-program for best fit  method
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int n,i;
  printf("enetr the value of n=");
  	scanf("%d",&n);
  float x[n],y[n];
  printf("enetr the value of x[i]= ");
  for(int i=1; i<=n; i++)
  {
     scanf("%f",&x[i]);
  }
  printf("enetr the value of y[i]=");
  for(int i=1; i<=n; i++)
  {
     scanf("%f",&y[i]);
  } 
   float sum1,sum2,sum3,sum4;
   for(int i=1; i<=n; i++)
   {
    sum1=sum1+x[i];
    sum2=sum2+y[i];
    sum3=sum3+(x[i]*y[i]); 
    sum4=sum4+(x[i]*x[i]);
   } 
    float a,b ; 
     a=((sum4*sum2-sum1*sum3)/(n*sum4-sum1*sum1));
     b=((n*sum3-sum1*sum2)/(n*sum4-sum1*sum1));
  
  printf("\nbest fit line for y=%f+%fx",a,b);
  return 0;
}


