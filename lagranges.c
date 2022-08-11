//c-program for lagranges method
#include<stdio.h>
#include<math.h>
int main()
{
  int n,a;
  float sum=0;
  printf("enetr the value of n=");
  	scanf("%d",&n);
  printf("enetr the value of a=");
  	scanf("%d",&a);
  float x[n],y[n];
  printf("enetr the value of x[n]=");
  for(int i=1; i<=n; i++)
  {
     scanf("%f",&x[i]);
  }
  printf("enetr the value of y[n]=");
  for(int i=1; i<=n; i++)
  {
    
      scanf("%f",&y[i]);
  }
  sum=0;
  for(int i=0; i<=n; i++)
  {
    float num=1,denom=1;
     for(int j=1;j<=n; j++)
    {
     if(j!=i)
    {
    num=num*(a-x[j]);
    denom=denom*(x[i]-x[j]);
    }
   } 
   sum=sum+(num/denom)*y[i];
  }
  printf("\nthe of f y value given as a=x is =%f",sum);
  return 0;


}
