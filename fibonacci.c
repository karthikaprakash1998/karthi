#include<stdio.h>
int main()
{
int a,b,c,i,n;
a=0;b=1;
printf("enter the value");
scanf("%d",&n);
printf("%d",a);
printf("%d",b);
for(i=0;i<n;i++)
{
c=a+b;
a=b;b=c;
printf("%d",c);
}
