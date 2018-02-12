#include<stdio.h>
void main()
{
int n,temp=1,n1;
printf("enter the value");
scanf("%d",&n);
while(n>0)
{
n1=n%10;
temp=temp*n1;
n=n/10;
}
printf("%d",temp);
}
