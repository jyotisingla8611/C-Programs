/*
	1.insertion at specific location
	2.insertion in a sorted array
*/
#include <stdio.h>
	int main()
	{
		int i,size;
		printf("Enter size of array: ");
		scanf("%d",&size);
		int *arr=malloc(sizeof(int)*(size+1));
		printf("Enter elements : \n");
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		int ins,pos;
		printf("Enter the number to insert : ");
		scanf("%d",&ins);
		printf("Enter the position : ");
		scanf("%d",&pos);
		for(i=size-1;i>=pos-1;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[pos-1]=ins;
		printf("\nNew array is : \n");
		for(i=0;i<=size;i++)
		{
			printf("%d\t",arr[i]);
		}
		return 0;
	}
