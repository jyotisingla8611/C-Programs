#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	int main()
	{
		char str[100];
		gets(str);
		int i=0;
		while(str[i]!='\0')
		{
			i++;
		}
		printf("%d",i);
	}
