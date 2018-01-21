#include<stdio.h>
void main()
{
int x,y,z;
printf("enter 2 numbers");
scanf("%d%d",&x,&y);
z=x*y;
sqrt(z);
if((x*y)==(sqrt(z)))
{
printf("yes");
}
else
{
printf("no");
}
}
