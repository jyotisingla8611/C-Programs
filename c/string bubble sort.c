#include <stdio.h>
#include <string.h>
	void swap(char *a, char *b)
	{
		char c[10];
		strcpy(c,a);
		strcpy(a,b);
		strcpy(b,c);
	}
	int main()
	{
		char str[5][10];
		int i,j;
		for(i=0;i<5;i++)
		{
			gets(str[i]);
		}
		for(i=0;i<4;i++)
		{
			for(j=0;j<5-i-1;j++)
			{
				if(strcmp(str[j],str[j+1])>0)
				{
					swap(&str[j],&str[j+1]);
				}
			}
		}
		printf("\nResult :\n\n");
		for(i=0;i<5;i++)
		{
			puts(str[i]);
			//printf("\n");
		}
	}
