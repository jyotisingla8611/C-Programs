#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	void swap(char *a,char *b)
	{
		char temp=*a;
		*a=*b;
		*b=temp;
		
	}

	int main()
	{
		char str[100];
		gets(str);
		int len=strlen(str);
		int i;
		for(i=0;i<len/2;i++)
		{
			swap(&str[i],&str[len-i-1]);
		}
		puts(str);
	}
