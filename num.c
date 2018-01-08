#include<stdio.h>
void main()
{
char s;
printf("enter char");
scanf("%s,&s);
if((s>='A')&&(s<='Z')||(s>='a')&&(s<='z'))
{
printf("alphabet");
}
elseif((s>=0)&&(s<=9))
{
printf("number");
}
else
{
printf("special char");
}
}
