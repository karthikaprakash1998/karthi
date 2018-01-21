#include<stdio.h>
#include<string.h>
void main()
{
int x;
char str[100];
printf("enter the string");
gets(str);
x=strlen(str);
y=x/2;
if(y%2==0)
{
y='*';
y+1='*';
}
else
{
y='*';
}
}
