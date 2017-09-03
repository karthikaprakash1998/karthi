#include<stdio.h>
int main()
{
char str[100];
int i,c=0;
printf("enter string");
gets(str);
for(i=;str[i]!='\0';i++)
{
if(str[i]==" ")
{
c++;
}
}
printf("the words in given string is %d",c);
}
