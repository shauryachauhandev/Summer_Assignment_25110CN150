#include<stdio.h>
int main()
{
char str[100];
int i,j=0;
char newstr[100];

printf("Enter the string:");
fgets(str,sizeof(str),stdin);

for(i=0;str[i]!='\0';i++)
{
if(str[i]!=' ')
{
newstr[j]=str[i];
j++;
}
}

newstr[j]='\0';

printf("String without spaces:%s",newstr);

return 0;
}