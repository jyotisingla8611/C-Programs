#include <stdio.h>
#include <string.h>
	int main()
	{
		char str[10],ch;
		int i,pos;
		printf("Enter string : ");
		gets(str);
		printf("Enter character to insert : ");
		scanf("%c",&ch);
		printf("Enter position to insert : ");
		scanf("%d",&pos);
		int len=strlen(str);
		for(i=len-1;i>pos-2;i--)
		{
			str[i+1]=str[i];
		}
		str[pos-1]=ch;
		
		printf("New string : ");
		puts(str);
		
	}
