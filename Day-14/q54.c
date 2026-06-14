#include<stdio.h>
int main()
{
int n,i,a[50],num,count=0;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element to check frequency:");
scanf("%d",&num);
for(i=0;i<n;i++)
{
if(a[i]==num)
{
count++;
}
}
printf("Frequency=%d",count);
return 0;
}