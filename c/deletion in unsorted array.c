// Deletion of element in un sorted array
#include <stdio.h>
	int main()
	{
		int size;
		scanf("%d",&size);
		int *arr=malloc(4*size);
		printf("Enter array : \n");
		int i;
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		int e;
		printf("Enter element to delete : ");
		scanf("%d",&e);	
		for(i=0;i<size;i++)
		{
			if(arr[i]==e)
			{
				int temp=i;
				while(temp<size)
				{
				arr[temp]=arr[temp+1];
				temp++;
			    }
			    i--;
			    size--;
			}
		}
		printf("\nNew array is : \n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}	
		
	}
