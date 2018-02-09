#include<stdio.h>
void main()
{
int c[10];
int i,j,temp;
printf("enter a number");
for(i=0;i<5;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(c[i]>c[j])
{
temp=c[j];
c[j]=c[i];
c[i]=temp;
}
}
}
for(i=0;i<5;i++)
printf("%d",c[i]);
}
