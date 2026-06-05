#include<stdio.h>
int main()
{
int n,i,p=0;
printf("Enter the number to be checked:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
p=p+i;
}
}
if(p==n)
{
printf("The no. is perfect number");
}
else
{
printf("The no. is not perfect number");
}
return 0;
}