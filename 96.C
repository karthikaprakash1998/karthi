#include<stdio.h>
void main()
{
int n,i,flag=0;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<n/2;i++)
{
if(n%2==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("composite number");
}
else
{
printf("not composite number");
}
}
