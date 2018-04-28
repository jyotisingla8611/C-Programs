#include <stdio.h>
#include <string.h>
	int main()
	{
		FILE *fptr;
		fptr=fopen("files/demo2.txt","w");
		printf("File created successfuly...\nEnter state : ");
		char state[20];
		gets(state);
		int i,l=strlen(state);
		for(i=0;i<l;i++)
		{
			fputc(state[i],fptr);
			printf("Writing %c \n",state[i]);
		}
		fclose(fptr);
		return 0;
	}
