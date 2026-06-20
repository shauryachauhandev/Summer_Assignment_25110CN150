#include<stdio.h>
int main()
{
int n,a[50][50],b[50][50],i,j,count=0;

printf("Enter the no. of rows and columns:");
scanf("%d",&n);

printf("Enter the matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=a[j][i];
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]==b[i][j])
{
count++;
}
}
}

if(count==n*n)
{
printf("The matrix is symmetric");
}
else
{
printf("The matrix is not symmetric");
}

return 0;
}