#include<stdio.h>
void main()
{
char str[50]="hai";
int i,flag;
for(i=0;str[i]!='\0';i++)
{
if(str[i]==str[i+1])
{
flag=0;
}
else
{
flag=1;
}
}
if(flag==1)
{
    printf("it is isogram");
    
}
}

