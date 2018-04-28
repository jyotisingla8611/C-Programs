#include <stdio.h>
	int main()
	{
		FILE *fptr;
		fptr=fopen("files/demo.txt","r");
		if(fptr==NULL)
		{
			printf("File Not Found...");
		}else
		{
			printf("File Opened successfuly...");
		}
		return 0;
	}
