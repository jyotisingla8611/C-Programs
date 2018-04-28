#include <stdio.h>
	typedef struct 
	{
		int day;
		int month;
		int year;
		long cont;
	}DOB;
	
	typedef struct 
	{
		long lic;
		long adh;
		long pan;
	}ID;
	
	typedef struct
	{
		DOB dob;
		char name[10];
		char dept[10];
		float sal;
		ID id;
	}EMP;
	
	int main()
	{
		EMP a[2];
		int i;
		for(i=0;i<2;i++)
		{
			fflush(stdin);
			printf("Enter name : ");
			gets(a[i].name);
			printf("Enter DOB : \n");
			printf("Day : ");
			scanf("%d",&a[i].dob.day);
			printf("Month : ");
			scanf("%d",&a[i].dob.month);
			printf("Year : ");
			scanf("%d",&a[i].dob.year);
			printf("Enter contact no. : ");
			scanf("%ld",&a[i].dob.cont);
			fflush(stdin);
			printf("Enter department : ");
			gets(a[i].dept);
			printf("Enter salary : ");
			scanf("%f",&a[i].sal);
			printf("\nIdentification Details : ");
			printf("\nAadhar No. : ");
			scanf("%ld",&a[i].id.adh);
			printf("PAN No. : ");
			scanf("%ld",&a[i].id.pan);
			printf("License No. : ");
			scanf("%ld",&a[i].id.lic);
		}
		
		printf("\n\nYour Entered Details are : \n");
		for(i=0;i<2;i++)
		{
			printf("\nEmployee %d:",i+1);
			printf("\nName : %s",a[i].name);
			printf("\nDOB : %d.%d.%d",a[i].dob.day,a[i].dob.month,a[i].dob.year);
			printf("\nContact : %ld",a[i].dob.cont);
			printf("\nDepartment : %s",a[i].dept);
			printf("\nSalary : %.2f",a[i].sal);
			printf("\nAadhar No. : ");
			prinrf("%ld",a[i].id.adh);
			printf("\nPAN No. : ");
			printf("%ld",a[i].id.pan);
			printf("\nLicense No. : ");
			printf("%ld",a[i].id.lic);
		}
		
	}
