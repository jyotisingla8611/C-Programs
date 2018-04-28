#include <stdio.h>

	typedef struct 
	{
		int marks;
		union 
		{
			int roll;
			char name[20];
		};
	}STUDENT;

	int main()
	{
		STUDENT obj;
		int key;
		printf("Enter marks : ");
		scanf("%d",&obj.marks);
		printf("Press 1 to enter Name nd 2 to enter Roll NO. : ");
		scanf("%d",&key);
		if(key==1)
		{
			fflush(stdin);
			printf("Enter name : ");
			gets(obj.name);
			printf("\nYour entered details are : \n");
			printf("Name : ");
			puts(obj.name);
		}else
		{
			printf("Enter roll no. : ");
			scanf("%d",&obj.roll);
			printf("\nYour entered details are : \n");
			printf("Roll No. : %d\n",obj.roll);
		}
		
		printf("Marks : %d",obj.marks);
	}
