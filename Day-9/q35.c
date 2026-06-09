#include<stdio.h>
int main()
{
int n,i,j=65,k;
printf("Enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=1;k<=i;k++)
{
printf("%c",j);
}
printf("\n");
j++;
}
return 0;
}