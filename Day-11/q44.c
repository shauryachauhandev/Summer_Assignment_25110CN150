#include<stdio.h>
int fact(int n)
{
int i,factorial=1;
for(i=1;i<=n;i++)
{
factorial=factorial*i;
}
return factorial;
}
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
printf("Factorial=%d",fact(n));
return 0;
}