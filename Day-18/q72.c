#include<stdio.h>
int main()
{
int n,i,j,a[50],swap;

printf("Enter the no. of elements:");
scanf("%d",&n);

printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("The unsorted array:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}

printf("\n");
printf("The sorted array:\n");

for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]<a[j+1])
{
swap=a[j];
a[j]=a[j+1];
a[j+1]=swap;
}
}
}

for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}

return 0;
}