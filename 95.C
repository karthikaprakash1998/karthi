#include<stdio.h>
void main()
{
int p,t,r,value;
printf("enter the amount,time,rate");
scanf("%d%d%d",&p,&t,&r);
value=p*t*r/100;
printf("value is %d",value);
}
