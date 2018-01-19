#include<stdio.h>
void main()
{
int x,y,d;
printf("enter the value for x and y");
scanf("%d%d",&x,&y);
d=x-y;
if(d%2==0)
{
printf("it is even");
}
else
{
printf("it is odd");
}
}
