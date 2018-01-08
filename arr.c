#include<stdio.h>
void main()
{
int n[5],k,i,sum=0;
printf("enter the value");
for(i=0;i<5;i++)
{
scanf("%d",&n[i]);
}
printf("enter the value for k");
scanf("%d",&k);
for(i=0;i<k;i++)
{
sum=sum+n[i];
}
printf("%d",sum);
}
