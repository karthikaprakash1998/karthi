#include <stdio.h>
void main()
{
	char str[50];
	int i;
	printf("Enter a string: ");
	scanf("%s",str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32; 
			continue;
		}
		else
		if(str[i]==' ')
		{
		    ++i;
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32; 
				continue; 
			}
		}
	
	}
	
	printf("string is: %s\n",str);
}
