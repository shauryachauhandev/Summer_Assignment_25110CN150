#include<stdio.h>

int main()
{
char str[100],newstr[100];
int i,j,k=0,flag;

printf("Enter the string:");
scanf("%s",str);

for(i=0;str[i]!='\0';i++)
{
flag=0;

for(j=0;j<k;j++)
{
if(str[i]==newstr[j])
{
flag=1;
break;
}
}

if(flag==0)
{
newstr[k]=str[i];
k++;
}
}

newstr[k]='\0';

printf("String after removing duplicates:%s",newstr);

return 0;
}