#include<stdio.h>
int main()
{
int n,i,a[50],checked[50]={0},j,b[50];
printf("Enter the no. of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int k=0;
for(i=0;i<n;i++)
{
if(checked[i]==0)
{
b[k]=a[i];
k++;
for(j=0;j<n;j++)
{
if(a[j]==a[i])
{
checked[j]=1;
}
}
}
}
printf("The new array:\n");
for(i=0;i<k;i++)
{
printf("%d ",b[i]);
}
return 0;
}