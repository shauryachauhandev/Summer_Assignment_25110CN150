#include<stdio.h>
int main()
{
int n,i,j,a[10][10],sum=0;

printf("Enter the order of matrix:");
scanf("%d",&n);

printf("Enter matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}

for(i=0;i<n;i++)
{
sum=sum+a[i][i];
}

printf("Diagonal sum=%d",sum);

return 0;
}