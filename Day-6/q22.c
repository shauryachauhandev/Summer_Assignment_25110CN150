#include<stdio.h>
int main()
{
int n,r,decimal=0,b=1;
printf("Enter the binary to be converted to decimal:");
scanf("%d",&n);
while(n>0)
{
r=n%10;
decimal=r*b+decimal;
b=b*2;
n=n/10;
}
printf("Decimal:%d",decimal);
return 0;
}