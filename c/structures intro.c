#include <stdio.h>
#include <string.h>
#include <stdlib.h>
	int main()
	{
	
		typedef struct 
		{
			char name[10];
			int id;
			char dep[10];
			char dob[10];
			float sal;
		}EMP;
		EMP var[3];
		int i;
		for(i=0;i<2;i++)
		{
			printf("\nEmployee %d :\n",i);
			printf("Enter Name : ");
			gets(var[i].name);
			printf("Enter id : ");
			scanf("%d",&var[i].id);
			fflush(stdin);
			printf("Enter department : ");
			gets(var[i].dep);
			fflush(stdin);
			printf("Enter DOB : ");
			scanf("%s",var[i].dob);
			fflush(stdin);
			printf("Enter the salary in float : ");
			scanf("%f",&var[i].sal);
			fflush(stdin);
		}
		var[2]=var[0];
		printf("\n Your Entered Details Are :\n");
		for(i=0;i<3;i++)
		{
			printf("\n\nEmployee %d :\n",i);
			printf("Name : ");
			printf("%s",var[i].name);;
			printf("\nID : ");
			printf("%d",var[i].id);
			printf("\nDepartment : ");
			puts(var[i].dep);
			printf("DOB : ");
			printf("%s",var[i].dob);
			printf("\nSalary : ");
			printf("%.2f",var[i].sal);
		}
		
	}
