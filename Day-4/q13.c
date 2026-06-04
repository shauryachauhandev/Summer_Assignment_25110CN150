#include<stdio.h>
int main()
{
int n,firstnum=0,secondnum=1,i,next;
printf("Enter the no. of terms of fibonacci series:");
scanf("%d",&n);
printf("The fibonacci series\n");
for(i=1;i<=n;i++)
{
printf("%d ",firstnum);
next=firstnum+secondnum;
firstnum=secondnum;
secondnum=next;
}
return 0;
}