#include<stdio.h>
void main()
{
int l,b,h,area,volume;
printf("enter the length,breadth,height");
scanf("%d%d%d",&l,&b,&h);
area=2*((l*b)+(b*h)+(h*l));
printf("area is %d",area);
volume=l*b*h;
printf("volume is %d",volume);

}
