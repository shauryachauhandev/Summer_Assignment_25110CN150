#include<stdio.h>
int main()
{
int m,n,a[50][50],i,j,flag,sum=0;

printf("Enter the no. of rows:");
scanf("%d",&n);

printf("Enter the no. of columns:");
scanf("%d",&m);

printf("Enter the matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("Enter row number of which you want the sum of:");
scanf("%d",&flag);

for(j=0;j<m;j++)
{
sum=sum+a[flag-1][j];
}

printf("Sum of elements of row number %d : %d",flag,sum);

return 0;
}