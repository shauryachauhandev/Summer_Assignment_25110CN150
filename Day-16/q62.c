#include<stdio.h>
int main()
{
int n,i,a[50],maxe=0,j,checked[50]={0},count,frequency=0;
printf("Enter the no. of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(checked[i]==0)
{
count=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
count++;
checked[j]=1;
}
}
if(frequency<count)
{
frequency=count;
maxe=a[i];
}
}
}
printf("The maximum frequency element:%d\n",maxe);
printf("It appears %d times",frequency);
return 0;
}