#include<stdio.h>
int main()
{
int max,i;
printf("Enter the number ");
scanf("%d",&max);
for(i=1;i<=max;i++)
{
  if(i%2==0)
    printf("square=%d ",i*i);
  else
    printf("cube=%d ",i*i*i);
}
prinf("final result is %d",square+cube);
}
