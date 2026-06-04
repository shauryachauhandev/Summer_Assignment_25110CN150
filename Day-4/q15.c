#include<stdio.h>
#include<math.h>
int main()
{
int count=0,n,an=0,r,original;
printf("Enter the number to be checked:");
scanf("%d",&n);
original=n;
while(n>0)
{
n=n/10;
count=count+1;
}
n=original;
while(n>0)
{
r=n%10;
an=an+(int)pow(r,count);
n=n/10;
}
if(original==an)
{
printf("The no. is armstrong number");
}
else
{
printf("The no. is not armstrong number");
}
return 0;
}