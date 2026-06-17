#include<stdio.h>
int main()
{
int n,i,a[50],sumarr=0,intsum=0,temp,j;
printf("Enter the no. of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sumarr=sumarr+a[i];
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=a[0];i<=a[n-1];i++)
{
intsum=intsum+i;
}
printf("The missing element:%d",intsum-sumarr);
return 0;
}