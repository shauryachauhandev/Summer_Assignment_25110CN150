#include<stdio.h>
#include<math.h>
int arm(int a)
{
int count=0,an=0,r,original;
original=a;
while(a>0)
{
a=a/10;
count=count+1;
}
a=original;
while(a>0)
{
r=a%10;
an=an+(int)pow(r,count);
a=a/10;
}
if(original==an)
{
printf("The number is armstrong number");
}
else
{
printf("The number is not armstrong number");
}
return 0;
}
int main()
{
int n;
printf("Enter the number to be checked for armstrong number:");
scanf("%d",&n);
arm(n);
return 0;
}