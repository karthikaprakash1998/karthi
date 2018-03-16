#include<stdio.h>
void main()
{
int n,k,a=1,i;
printf("enter the 2 number");
scanf("%d%d",&n,&k);
for(i=0;i<k;i++)
{
a=a*n;
}
printf("%d",a);
}
