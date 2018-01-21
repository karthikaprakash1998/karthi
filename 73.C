#include<stdio.h>
void main()
{
int x,y,z;
printf("enter the value of n");
scanf("%d",&x);
scanf("%d%d",&y,&z);
if((x>=y)&&(x<=z))
{
printf("number is between yand z");
}
else
{
printf("no");
}
}
