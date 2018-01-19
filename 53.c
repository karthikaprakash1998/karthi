#include<stdio.h>
void main()
{
int n,sum=0;
printf("enter the value");
scanf("%d",&n);
while(n>0)
{
n1=n%10;
sum=sum+n1;
n=n/10;
}
printf("%d",sum);
}


