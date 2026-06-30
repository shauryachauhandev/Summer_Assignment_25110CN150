#include<stdio.h>

int main()
{
int a[100],n,i,choice,max,min,sum=0,search,flag;

printf("Enter the number of elements: ");
scanf("%d",&n);

while(1)
{
printf("\n========== ARRAY MENU ==========\n");
printf("1. Insert Elements\n");
printf("2. Display Array\n");
printf("3. Find Maximum\n");
printf("4. Find Minimum\n");
printf("5. Find Sum\n");
printf("6. Search Element\n");
printf("7. Exit\n");

printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:

printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Elements inserted successfully.\n");
break;

case 2:

printf("Array Elements:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
break;

case 3:

max=a[0];

for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}

printf("Maximum Element = %d\n",max);
break;

case 4:

min=a[0];

for(i=1;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}

printf("Minimum Element = %d\n",min);
break;

case 5:

sum=0;

for(i=0;i<n;i++)
{
sum=sum+a[i];
}

printf("Sum = %d\n",sum);
break;

case 6:

printf("Enter element to search: ");
scanf("%d",&search);

flag=0;

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
printf("Element Found.\n");
}
else
{
printf("Element Not Found.\n");
}

break;

case 7:

printf("Thank You.\n");
return 0;

default:

printf("Invalid Choice.\n");
}
}

return 0;
}