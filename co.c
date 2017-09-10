#include<stdio.h>
int main()
{
int wordcount(char *str,int n)
{
 int i=0,count=0,c=0;

    for(i=0;i<strlen(str);i++)
      {
        if(str[i]!=' ' || str[i]!='\n' || str[i]!='\t')
         {
           count++;
         }

    else
    {
        if(count<=n)
        {
            c++;
        }
    count=0;
    }


}
if(count<=n)
return (c+1);
else
return count1;
}
