#include <stdio.h>
	int main()
	{
		FILE *fptr;
		char name[20];
		int age;
		int size,i;
		printf("Enter size : ");
		scanf("%d",&size);
		fptr=fopen("files/demo2.txt","a");
		printf("File opened/created successfuly...\n");
		for(i=0;i<size;i++)
		{
			fflush(stdin);
			printf("Enter Name and Age : ");
			scanf("%s %d",name,&age);
			fprintf(fptr,"%s\t%d\n",name,age);
		}
			
	//	fprintf(fptr,"Name\tAge\n");
	/*	for(i=0;i<l;i++)
		{
			fputc(state[i],fptr);
			printf("Writing %c \n",state[i]);
		}
	*/
		
		
		
		fclose(fptr);
		return 0;
	}
