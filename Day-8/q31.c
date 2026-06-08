#include<stdio.h>
int main()
{
int n,i,k;
printf("Enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=65;k<=64+i;k++)
{
printf("%c",k);
}
printf("\n");
}
return 0;
}