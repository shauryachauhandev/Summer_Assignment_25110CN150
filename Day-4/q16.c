#include<stdio.h>
#include<math.h>
int main()
{
int count=0,n1,n2,i,an=0,r,original,n;
printf("Enter the range of number\n");
printf("Enter the lower limit of range:");
scanf("%d",&n1);
printf("Enter the upper limit of range:");
scanf("%d",&n2);
for(i=n1;i<=n2;i++)
{
count=0;
an=0;
original=i;
n=i;
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
printf("%d ",original);
}
}
return 0;
}