
/*
 ch=fgetc(fptr);
 feof(fptr);
 fscanf(fptr,format specifier,data member);
 fgets(data member,length,fptr);------->>>> the length includes null character too..i.e.,it will always pick length-1 characters
 fwrite(text,1(i.e.,size of data type char),sizeof(text),fptr);
*/
#include <stdio.h>
#include <string.h>
	int main()
	{
		char text1[10],text2[10],text3[10];
		int num1;
		FILE *fptr;
		fptr=fopen("files/demo.txt","w");
	/*	gets(text1);
		gets(text2);
		gets(text3);
		scanf("%d",&num1);
		fprintf(fptr,"%s %s %s %d",text1,text2,text3,num1);*/
		//fgets(text,10,fptr);
		//puts(text);
		int c=2;
		while(c--)
		{
			//ch=fgetc(fptr);
			//printf("%c",ch);
			printf("Input:\n");
		scanf("%s %s %s %d",text1,text2,text3,&num1);
		fprintf(fptr,"%s %s %s %d\n",text1,text2,text3,num1);
		fscanf(fptr,"%s %s %s %d",text1,text2,text3,&num1);
		printf("Output:\n%s %s %s %d",text1,text2,text3,num1);
			
		}
		
			
		fclose(fptr);
	}
