#include<stdio.h>
#include<string.h>
void main()
{
int count=0,i,d;
char str[100]="aashika",c='*';
/*printf("enter the string");
  scanf("%c",&str);*/
  for(i=0;str[i]!='\0';i++)
  {
      count++;
  }
printf("%d",count);
d=count/2;
if(d%2==0)
{
    str[d]=c;
    str[d+1]=c;
    for(i=0;str[i]!='\0';i++)
    printf("%c",str[i]);
    
}
else
{
    str[d]=c;
    for(i=0;str[i]!='\0';i++)
    printf("%c",str[i]);
}
}
