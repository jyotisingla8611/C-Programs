// sorting without removing duplicates
#include <stdio.h>
	int main()
	{
		char str[100];
		int i,count[26]={0};
		gets(str);
		i=0;
		while(str[i]!='\0')
		{
			count[str[i]-97]++;
			i++;
		}
		for(i=0;i<26;i++)
		{
			while(count[i]--)
			{
				printf("%c",i+97);
			}
		}
	}
