#include<stdio.h>
int main()
{
int n,i,j,a[50],swap,minindex;

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
minindex=i;

for(j=i+1;j<n;j++)
{
if(a[j]<a[minindex])
{
minindex=j;
}
}

if(minindex!=i)
{
swap=a[i];
a[i]=a[minindex];
a[minindex]=swap;
}
}

for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}

return 0;
}