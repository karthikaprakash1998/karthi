#include<stdio.h>
void main()
{
int n,a;
printf("enter a number");
scanf("%d",&n);

if(n%2==0)
{
a=n/2;
printf("%d",a);
}
else
{
printf("%d",n);
}
}
