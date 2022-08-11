//c-program for newtons_backward method
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
  p=((k-x[n])/h);
  product =1;
  sum=y[n];
  for(i=n; i>=2; i--)
  {
    for(int j=n;j>=n-i+2; j--)
    {
      y[j]=y[j]-y[j-1];
      printf(" %f \t",y[j]);
    }
    printf("\n");
    product = product * ((p+n-i)/(n-i+1)) ;
    sum = sum+product * y[n];
  
  }
  printf("\nthe value y=%f",sum);
  return 0;


}
