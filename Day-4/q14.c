#include<stdio.h>
int main()
{
int n,firstnum=0,secondnum=1,i,next=0;
printf("Enter the term number:");
scanf("%d",&n);
if(n==1)
{
printf("%d",firstnum);
}
else
{
for(i=1;i<n;i++)
{
next=firstnum+secondnum;
firstnum=secondnum;
secondnum=next;
}
printf("%d",firstnum);
}
return 0;
}