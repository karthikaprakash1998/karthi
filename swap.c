#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("the swap values is %d%d",a,b);
}
