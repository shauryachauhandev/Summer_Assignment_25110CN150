#include<stdio.h>
int main()
{
int n,x,i,solution=1;
printf("Enter the number:");
scanf("%d",&x);
printf("Enter the exponent:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
solution=solution*x;
}
printf("The solution:%d",solution);
return 0;
}