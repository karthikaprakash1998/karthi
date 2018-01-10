#include<stdio.h>
void main()
{
char str[100];
int i,count=0;
printf("enter the string");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==" ")
{
count++;
}
printf("%d",count+1);
}
}
