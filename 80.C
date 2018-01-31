#include<stdio.h>
void main()
{
int n,i,r;
printf("enter the value");
scanf("%d",&n);
while(n>0)
{
r=n%10;
if(r%2==1)
{
    printf("odd numbers are %d",r);
}
n=n/10;
}

}
