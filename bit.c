#include<stdio.h>
int main()
{
int a,b;
printf("enter values");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf(the value is %d%d",a,b);
}
