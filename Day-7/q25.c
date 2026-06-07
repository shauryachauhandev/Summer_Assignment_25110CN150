#include<stdio.h>
int fact(int n)
{
if(n<=1)
{
return 1;
}
else
{
return n*fact(n-1);
}
}
int main()
{
int n,factorial;
printf("Enter the number whose factorial you want:");
scanf("%d",&n);
factorial=fact(n);
printf("The factorial of number:%d",factorial);
return 0;
}