#include<stdio.h>
int main()
{
char str[100];
int i,l=0;
printf("enter the character");
gets(str);
for(i=0;str[i]!='\0';i++)
{
l=l+1;
}
printf("number of character in given line is %d",l);
}
