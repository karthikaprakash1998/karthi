#include<stdio.h>
void main()
{
char str[100];
int k,i;
printf("enter the string");
gets(str);
printf("enter the number");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%s",str[i]);
}
}
