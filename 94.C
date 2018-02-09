#include<stdio.h>
void main()
{
int b,k[5],i,j;
printf("enter  position");
scanf("%d",&b);
printf("enter a numbers");
for(i=0;i<5;i++)
{
scanf("%d",&k[i]);
}
for(i=0;i<5;i++)
if(i==b)
{
printf("%d",k[i]);
}

}
