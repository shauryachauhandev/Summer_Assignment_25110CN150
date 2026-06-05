#include<stdio.h>
int main()
{
int n,i,j,largest=0;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
int count=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
count++;
}
}
if(count==2)
{
largest=i;
}
}
}
printf("Largest prime factor=%d",largest);
return 0;
}