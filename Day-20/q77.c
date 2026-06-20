#include<stdio.h>
int main()
{
int R1,C1,R2,C2,a[50][50],b[50][50],c[50][50],i,j,k;

printf("Enter the no. of rows of first matrix:");
scanf("%d",&R1);

printf("Enter the no. of columns of first matrix:");
scanf("%d",&C1);

printf("Enter the matrix:\n");
for(i=0;i<R1;i++)
{
for(j=0;j<C1;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("Enter the no. of rows of second matrix:");
scanf("%d",&R2);

printf("Enter the no. of columns of second matrix:");
scanf("%d",&C2);

printf("Enter the matrix:\n");
for(i=0;i<R2;i++)
{
for(j=0;j<C2;j++)
{
scanf("%d",&b[i][j]);
}
}

if(C1!=R2)
{
printf("Multiplication not possible");
return 0;
}

for(i=0;i<R1;i++)
{
for(j=0;j<C2;j++)
{
c[i][j]=0;

for(k=0;k<C1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}

printf("Multiplication of both matrix:\n");

for(i=0;i<R1;i++)
{
for(j=0;j<C2;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}

return 0;
}