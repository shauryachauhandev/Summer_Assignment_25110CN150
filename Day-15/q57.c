#include<stdio.h>
int main()
{
int n,i,a[50];
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Reversed array:\n");
for(i=n-1;i>=0;i--)
{
printf("%d ",a[i]);
}
return 0;
}