#include <stdio.h>
#include <stdlib.h>
	int main()
	{
		int i,count[256];
		for(i=0;i<256;i++)
		{
			count[i]=0;
		}
			
		//printf("Enter the max length of string : ");
		//scanf("%d",&s);
		char str[100];
		//char *str=malloc(sizeof(char)*s);
		fflush(stdin);
		
		printf("Enter string : ");
		gets(str);
		
		
		printf("\n");
		i=0;
		while(str[i]!='\0')
		{
			count[str[i]]++;
			i++;
		}
	
		printf("\nSorted string after removing duplicates : \n");
		
		for(i=1;i<256;i++)
		{
			if(count[i])
			{ 
				printf("%c",i);
			}
		}
	}
