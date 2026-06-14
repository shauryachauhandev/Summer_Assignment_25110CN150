#include<stdio.h>
int main()
{
int n,i,a[50],largest,second;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
largest=second=-9999;
for(i=0;i<n;i++)
{
if(a[i]>largest)
{
second=largest;
largest=a[i];
}
else if(a[i]>second && a[i]!=largest)
{
second=a[i];
}
}
printf("Second largest=%d",second);
return 0;
}