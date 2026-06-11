#include<stdio.h>
int prime(int n)
{
int i,count=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
return 1;
}
else
{
return 0;
}
}
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
if(prime(n))
{
printf("Prime number");
}
else
{
printf("Not prime number");
}
return 0;
}