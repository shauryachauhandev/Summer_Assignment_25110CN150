#include<stdio.h>
int main()
{
int n,i,a[50],flag,count=0,beg,end,mid,swap,j;

printf("Enter the no. of elements:");
scanf("%d",&n);

printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
swap=a[j];
a[j]=a[j+1];
a[j+1]=swap;
}
}
}

printf("Enter the element to be searched:");
scanf("%d",&flag);

beg=0;
end=n-1;

while(beg<=end)
{
mid=(beg+end)/2;

if(a[mid]==flag)
{
printf("%d is present in the array",flag);
count++;
break;
}
else if(a[mid]>flag)
{
end=mid-1;
}
else
{
beg=mid+1;
}
}

if(count==0)
{
printf("The number is not present in the array");
}

return 0;
}