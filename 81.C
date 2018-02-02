#include<stdio.h>
void main()
{
int x,y,diff;
printf("enter number of team members in kabali's team");
scanf("%d",&x);
printf("enter number of team members in opponent team");
scanf("%d",&y);
diff=x-y;
printf("difference is %d\n",diff);
if(x>y)
{
printf("\nkabali went to fight");
}
else
{
printf("\nkabali didnt went to fight");
}
}
