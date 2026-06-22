#include<stdio.h>
int main()
{
char str[100];
int i,count=0,flag=1;

printf("Enter the string:");
scanf("%s",str);

for(i=0;str[i]!='\0';i++)
{
count++;
}

for(i=0;i<count/2;i++)
{
if(str[i]!=str[count-1-i])
{
flag=0;
break;
}
}

if(flag==1)
{
printf("Palindrome string");
}
else
{
printf("Not a palindrome string");
}

return 0;
}