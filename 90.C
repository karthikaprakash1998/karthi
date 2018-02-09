#include<stdio.h>
void main()
{
char str[10];
int i;
printf("enter the alphanumeric string");
gets(str);
for(i=0;str[i]>=5;i++)
{
if(str[i]>'0' && str[i]<'9')
{
printf("%c",str[i]);
}
else
{
printf("there is no number");
}
}
}
