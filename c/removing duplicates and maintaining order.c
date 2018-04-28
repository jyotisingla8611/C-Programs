//maintaining order and removing duplicates
#include <stdio.h>
	int main()
	{
		char str[100];
		int i,count[256];
		for(i=0;i<256;i++) count[i]=0;
		gets(str);
		i=0;
		while(str[i]!='\0')
		{
			if(!count[str[i]])
			{
				printf("%c",str[i]);
				count[str[i]]++;
			}
			i++;
		}
	}
