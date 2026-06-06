#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter the number:");
scanf("%d",&n);
while(n>0)
{
if(n%2!=0)
{
count++;
}
n=n/2;
}
printf("Bits count:%d",count);
return 0;
}