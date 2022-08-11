//c program for trapezoidal rule
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) sin(x)
int main()
{
  float a,b,n,h,x;
  printf("enetr the value of lower value=");
  	scanf("%f",&a);
  printf("enetr the value of upper limit= ");
  scanf("%f",&b);
  printf("enetr the value of sub intervals=");
  scanf("%f",&n);
  h=(b-a)/n;
  float sum=0;
   for(int i=1; i<=n-1; i++)
   {
      x=a+(i*h);
      sum=sum+2*f(x);
   } 
   sum=sum+(f(a)+f(b));
   sum=(h/2)*sum;
  
  printf("\nthe value of integral=%f",sum);
  return 0;
}

