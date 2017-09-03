#include<stdio.h>
int main()
{
char str1[50],str2[50];
int i=0,c=0;
printf("enter the strings");
gets(str1);
gets(str2);
while((str1!='\0')||(str2!='\0'))
{
if(str1[i]!=str2[i])
{
c++;
i++;
}
}
if(c==0)
printf("the strings are equal");
else
printf("the strings are not equal");
}
}
