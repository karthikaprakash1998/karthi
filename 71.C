#include<stdio.h>
void main()
{
int temp;
char str[100];
printf("enter the character");
gets(str);
temp=str;
strrev(str);
if(str==temp)
{
printf("the string is palindrome");
}
else
{
printf("not a palindrome");
}
}
