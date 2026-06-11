#include<stdio.h>
int sum(int a,int b)
{
return a+b;
}
int main()
{
int a,b;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
printf("Sum=%d",sum(a,b));
return 0;
}