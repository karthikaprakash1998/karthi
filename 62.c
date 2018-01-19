#include<stdio.h>
void main()
{
char str[50]="10011";
int i;
for(i=0;str[i]!='\0';i++)
{
if((str[i]=0)||(str[i]=1))
{
printf("binary number");
}
else
{
printf("alphabet");
}
}
}
