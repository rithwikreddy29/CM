//c-program for newtons_forward method
 
#include<stdio.h>
#include<math.h>
int main()
{
  int n,i=1;
  float h,p,product,sum,k,x2;
  printf("enetr the value of n :");
  	scanf("%d",&n);  
  printf("enetr the value of x=");
  	scanf("%f",&k);
  float x[n],y[n];
  printf("enetr the value of x[n]=");
  for(i=1; i<=n; i++)
  {
  
     scanf("%f",&x[i]);
  }
  printf("enetr the value of y[n]=");
  for(i=1; i<=n; i++)
  {
    
      scanf("%f",&y[i]);
  }
  h=x[2]-x[1];
  p=((k-x[1])/h);
  product =1;
  sum=y[1];
  for(i=1; i<=n; i++)
  {
    for(int j=1;j<=n-i; j++)
    {
      y[j]=y[j+1]-y[j];
      printf(" %f \t",y[j]);
    }
    printf("\n");
    product = product * ((p-i+1)/i);
    sum = sum+product * y[1];
  
  }
  printf("\nthe value y=%f",sum);
  return 0;


}
