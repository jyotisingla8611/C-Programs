#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	int main()
	{
		char str[100];
		gets(str);
		int len=strlen(str);
		int i=0;
		for(i=0;i<len;i++)
		{
			if(str[i]>=65 && str[i]<=90)
			{
				str[i]+=32;
			}else if(str[i]>=97 && str[i]<=122)
			{
				str[i]-=32;
			}
			printf("%c",str[i]);
		}
	}
