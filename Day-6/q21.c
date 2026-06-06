#include<stdio.h>
int main()
{
int n,r,binary=0,b=1;
printf("Enter the number to be converted to binary:");
scanf("%d",&n);
while(n>0)
{
r=n%2;
binary=binary+r*b;
b=b*10;
n=n/2;
}
printf("Binary:%d",binary);
return 0;
}