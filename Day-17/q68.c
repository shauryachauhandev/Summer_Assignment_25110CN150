#include<stdio.h>
int main()
{
int n1,l,n2,i,j,a[50],b[50],n[50],checked[50]={0};

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

l=0;

for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if(a[i]==b[j] && checked[j]==0)
{
n[l]=a[i];
l++;
checked[j]=1;
break;
}
}
}

printf("The common elements are:\n");

for(i=0;i<l;i++)
{
printf("%d ",n[i]);
}

return 0;
}