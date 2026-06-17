#include<stdio.h>
int main()
{
int n1,n2,i,j,a[50],b[50],n[100],u[100],checked[100]={0};

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

int l=0;

for(i=0;i<n1+n2;i++)
{
if(checked[i]==0)
{
u[l]=n[i];
l++;

for(j=0;j<n1+n2;j++)
{
if(n[j]==n[i])
{
checked[j]=1;
}
}
}
}

printf("The union array:\n");

for(i=0;i<l;i++)
{
printf("%d ",u[i]);
}

return 0;
}