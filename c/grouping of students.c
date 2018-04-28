/*
	Ram is an assistant professor in univ. he has to show report of his student's performance to the HOD . For data analysis , he tried to make a C program which
	showed the division of students acc to the marks secured by them. He made 10 groups , each student must fall in one of the groups acc to the marks secured by
	the student.
*/
#include <stdio.h>
	int main()
	{
		int arr2[10]={0};
		int size,i;
		scanf("%d",&size);
		int arr[size];
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
			if(arr[i]==100) arr[i]--;
			arr2[arr[i]/10]++;
		}
		for(i=0;i<10;i++)
		{
			printf("\n%d\t%d\t",i,arr2[i]);
			while(arr2[i]--)
			{
				printf("*");
			}
		}
	}
