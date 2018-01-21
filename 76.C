#include<stdio.h>
void main()
{
int i,c=0,x;
printf("enter the number");
scanf("%d",&x);
for(i=0;i<=x;i++)
{
if(x%i==0)
{
c++;
}
}
if(c==2)
{
printf("prime number");
}
else
{
printf("composie number");
}
}
