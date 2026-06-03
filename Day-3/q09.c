#include<stdio.h>
int main()
{
int n,i,a,flag=0;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=n%i;
if(a==0)
{
flag++;
}
}
if(flag==2)
{
printf("Number is prime");
}
else
{
printf("Number is not prime");
}
return 0;
}