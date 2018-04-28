#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int len(char *str)
	{
		int i=0;
		while(str[i]!='\0')
		{
			i++;
		}
		return i;
	}

	int cmp(char *s1, char *s2,int len)
	{
		int flag=1;
		while(len--)
		{
			if(s1[len]!=s2[len])
			{
				flag=0;
				break;
			}
		}
		return flag;
	}

	int main()
	{
		char str1[100],str2[100];
		gets(str1);
		gets(str2);
		int res;
		if(len(str1)==len(str2))
		{
			
			res=cmp(str1,str2,strlen(str1));
		}else
		{
			res=0;
		}
		if(res)
		{
			printf("SAME..!!!!");
		}else
		{
			printf("NOT SAME..!!!!");
		}
	}
