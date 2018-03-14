#include<stdio.h>
#include<string.h>
void main()
{
char str[50];
int n,i,a;
printf("enter a character");
gets(str);
printf("enter a number");
scanf("%d",&n);
a=strlen(str);
printf("%d",a);
for(i=a;i>n;i--)
{
printf("%c",str[i]);
}
}
