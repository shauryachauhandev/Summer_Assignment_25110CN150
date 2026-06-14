#include<stdio.h>
int main()
{
int n,i,j=0,a[50],temp;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]!=0)
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
j++;
}
}
printf("Array after moving zeroes:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}