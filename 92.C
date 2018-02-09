#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("enter the limit");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{
sum=sum+i;
}
printf("%d",sum);
}
