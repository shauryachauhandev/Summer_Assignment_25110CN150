#include<stdio.h>

int main()
{
char str[100];
int choice,i,length,flag;

printf("Enter the string: ");
scanf("%s",str);

while(1)
{
printf("\n========== STRING MENU ==========\n");
printf("1. Find Length\n");
printf("2. Reverse String\n");
printf("3. Check Palindrome\n");
printf("4. Convert to Uppercase\n");
printf("5. Exit\n");

printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:

length=0;

for(i=0;str[i]!='\0';i++)
{
length++;
}

printf("Length = %d\n",length);
break;

case 2:

length=0;

for(i=0;str[i]!='\0';i++)
{
length++;
}

printf("Reversed String: ");

for(i=length-1;i>=0;i--)
{
printf("%c",str[i]);
}

printf("\n");
break;

case 3:

length=0;

for(i=0;str[i]!='\0';i++)
{
length++;
}

flag=1;

for(i=0;i<length/2;i++)
{
if(str[i]!=str[length-1-i])
{
flag=0;
break;
}
}

if(flag==1)
{
printf("Palindrome String\n");
}
else
{
printf("Not a Palindrome String\n");
}

break;

case 4:

for(i=0;str[i]!='\0';i++)
{
if(str[i]>='a' && str[i]<='z')
{
str[i]=str[i]-32;
}
}

printf("Uppercase String: %s\n",str);
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