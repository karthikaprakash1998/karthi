
#include<stdio.h>
void main()
{
int n,i,a[10],sum=0;
printf("enter the limit");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);

sum=sum+a[i];
}
printf("%d",sum);
}
