#include<stdio.h>
int main()
{
int n,i,j,a[50],flag;
printf("Enter the no. of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the sum value:");
scanf("%d",&flag);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]+a[j]==flag)
{
printf("The pair of elements:(%d,%d)\n",a[i],a[j]);
}
}
}
return 0;
}