#include<stdio.h>

int main()
{
int choice;
float a,b;

while(1)
{
printf("\n========== MENU ==========\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Exit\n");

printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:

printf("Enter two numbers: ");
scanf("%f%f",&a,&b);

printf("Sum = %.2f\n",a+b);
break;

case 2:

printf("Enter two numbers: ");
scanf("%f%f",&a,&b);

printf("Difference = %.2f\n",a-b);
break;

case 3:

printf("Enter two numbers: ");
scanf("%f%f",&a,&b);

printf("Product = %.2f\n",a*b);
break;

case 4:

printf("Enter two numbers: ");
scanf("%f%f",&a,&b);

if(b!=0)
{
printf("Division = %.2f\n",a/b);
}
else
{
printf("Division by zero is not possible.\n");
}

break;

case 5:

printf("Thank You.\n");
return 0;

default:

printf("Invalid Choice.\n");
}
}

return 0;
}