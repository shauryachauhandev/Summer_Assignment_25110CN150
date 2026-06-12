#include<stdio.h>
int pal(int a)
{
int original,r,reverse=0;
original=a;
while(a>0)
{
r=a%10;
reverse=reverse*10+r;
a=a/10;
}
if(original==reverse)
{
printf("The number is palindrome");
}
else
{
printf("The number is not palindrome");
}
return 0;
}
int main()
{
int n;
printf("Enter the number to be checked for palindrome:");
scanf("%d",&n);
pal(n);
return 0;
}