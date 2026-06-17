#include<stdio.h>
int main()
{
int n1,n2,i,a[50],b[50],n[100];
printf("Enter the no. of elements of 1st array:");
scanf("%d",&n1);
printf("Enter the elements:\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}

printf("Enter the no. of elements of 2nd array:");
scanf("%d",&n2);
printf("Enter the elements:\n");
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}

int k=0;

for(i=0;i<n1;i++)
{
n[k]=a[i];
k++;
}

for(i=0;i<n2;i++)
{
n[k]=b[i];
k++;
}

printf("The new array:\n");
for(i=0;i<n1+n2;i++)
{
printf("%d ",n[i]);
}

return 0;
}