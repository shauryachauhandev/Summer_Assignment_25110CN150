#include<stdio.h>
int main()
{
int n,i,a[50],search,flag=0;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element to search:");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(a[i]==search)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("Element found");
}
else
{
printf("Element not found");
}
return 0;
}