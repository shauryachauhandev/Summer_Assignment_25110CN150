#include<stdio.h>
int main()
{
char str[100],maxchar;
int i,j,count,maxcount=0;

printf("Enter the string:");
scanf("%s",str);

for(i=0;str[i]!='\0';i++)
{
count=0;

for(j=0;str[j]!='\0';j++)
{
if(str[i]==str[j])
{
count++;
}
}

if(count>maxcount)
{
maxcount=count;
maxchar=str[i];
}
}

printf("Maximum occurring character:%c",maxchar);
printf("\nFrequency:%d",maxcount);

return 0;
}