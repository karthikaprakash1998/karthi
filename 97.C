#include<stdio.h>
void main()
{
int n,n1;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
n1=n%10;
printf("%d",n1);
n=n/10;
}

}

