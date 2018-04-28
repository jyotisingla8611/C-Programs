#include <stdio.h>
#include <string.h>
#include <stdlib.h>
	typedef struct 
		{
			char name[10];
			int id;
			/*char dep[10];
			char dob[10];
			float sal;
			*/
		}EMP;
		
	void sort(EMP *a,int s)
	{
		int i,j;
		for(i=0;i<s-1;i++)
		{
			for(j=0;j<s-1-i;j++)
			{
				if(strcmp(a[j].name,a[j+1].name)>0)
				{
					EMP temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}
		
	int main()
	{
		int s;
		printf("Enter no.of employees :");
		scanf("%d",&s);
		EMP *var=malloc(sizeof(EMP)*s);
		int i;
		for(i=0;i<s;i++)
		{
			printf("\nEmployee %d :\n",i);
			printf("Enter Name : ");
			fflush(stdin);
			gets(var[i].name);
			printf("Enter id : ");
			scanf("%d",&var[i].id);
			/*fflush(stdin);
			printf("Enter department : ");
			gets(var[i].dep);
			fflush(stdin);
			printf("Enter DOB : ");
			scanf("%s",var[i].dob);
			fflush(stdin);
			printf("Enter the salary in float : ");
			scanf("%f",&var[i].sal);
			*/
			fflush(stdin);
		}
		sort(var,s);
		printf("\n Your Entered Details Are :\n");
		for(i=0;i<s;i++)
		{
			//printf("\n\nEmployee %d :\n",i);
			printf("\nName : ");
			printf("%s",var[i].name);;
			printf("\nID : ");
			printf("%d",var[i].id);
			/*printf("\nDepartment : ");
			puts(var[i].dep);
			printf("DOB : ");
			printf("%s",var[i].dob);
			printf("\nSalary : ");
			printf("%.2f",var[i].sal);
			*/
		}
		
	}
