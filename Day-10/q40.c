#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j<n;j++)
{
printf(" ");
}
for(j=65;j<=64+i;j++)
{
printf("%c",j);
}
for(j=63+i;j>64;j--)
{
printf("%c",j);
}
printf("\n");
}
return 0;
}