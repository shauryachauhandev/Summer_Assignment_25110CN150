#include<stdio.h>
int main()
{
int a,b,i,lcm,gcd;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
for(i=1;i<=a;i++)
{
if(a%i==0&&b%i==0)
{
gcd=i;
}
}
lcm=(a*b)/gcd;
printf("The lcm is:%d",lcm);
return 0;
}