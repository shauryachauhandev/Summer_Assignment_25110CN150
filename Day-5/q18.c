#include<stdio.h>
int main()
{
int n,i,s=0,r,o;
printf("Enter the number to be checked:");
scanf("%d",&n);
o=n;
while(n>0)
{
int fact=1;
r=n%10;
for(i=1;i<=r;i++)
{
fact=fact*i;
}
s=s+fact;
n=n/10;
}
if(s==o)
{
printf("The no. is strong number");
}
else
{
printf("The no. is not strong number");
}
return 0;
}