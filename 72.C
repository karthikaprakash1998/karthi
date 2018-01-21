#include<stdio.h>
void main()
{
    int flag=0;
char s[10];
scanf("%s",&s);
for(int i=0;s[i]!='\0';i++)
{
if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
{
flag=1;
}
}
if(flag==1)
{
    printf("vowels");
}
else
{
    printf("\n no");
}
}
