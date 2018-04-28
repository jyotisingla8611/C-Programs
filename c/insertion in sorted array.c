// insertion in an sorted array
#include <stdio.h>
	int main()
	{
		int i,size;
		printf("Enter size : ");
		scanf("%d",&size);
		int *arr=malloc(sizeof(int)*(size+1));
		printf("Enter elements : \n");
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		int ins;
		printf("Enter the number to insert : ");
		scanf("%d",&ins);
		i=size-1;
		int flag=1,j;
		while(i+1)
		{
			if(arr[i]>ins)
			{
				arr[i+1]=arr[i];
			}else
			{
				
				break;
			}
			i--;
		}
		arr[i+1]=ins;
		printf("\nNew array is : \n");
		for(i=0;i<=size;i++)
		{
			printf("%d\t",arr[i]);
		}	
	}
