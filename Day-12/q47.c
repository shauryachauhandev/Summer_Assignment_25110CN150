#include<stdio.h>
int fib(int a)
{
int firstnum=0,secondnum=1,i,next;
printf("The fibonacci series\n");
for(i=1;i<=a;i++)
{
printf("%d ",firstnum);
next=firstnum+secondnum;
firstnum=secondnum;
secondnum=next;
}
return 0;
}
int main()
{
int n;
printf("Enter the number of terms of fibonacci series:");
scanf("%d",&n);
fib(n);
return 0;
}