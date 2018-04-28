#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	int main()
	{
		char str1[]="Himachal",  str2[]="Pradesh";
		int l1=strlen(str1)+strlen(str2);
		char *str3=malloc(sizeof(char)*(l1+2));
		int i=0,j=0;
		while(str1[i]!='\0')
		{
			str3[j++]=str1[i++];
		}
		str3[j++]=' ';
		i=0;
		while(str2[i]!='\0')
		{
			str3[j++]=str2[i++];
		}
		str3[j]='\0';
		puts(str3);
	}
