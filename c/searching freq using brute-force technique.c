#include <stdio.h>
	int main()
	{
		int i,j,size,count;
		printf("Enter size : ");
		scanf("%d",&size);
		int arr[size];
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<size;i++)
		{
			count=0;
			for(j=i+1;j<size;j++)
			{
				if(arr[i] && arr[i]==arr[j])
				{
					count++;
					arr[j]=0;
				}
			}
			if(count)
			{
				printf("\n%d occured %d times",arr[i],count+1);
			}
		}
		printf("\n\nNew Array : \n");
		for(i=0;i<size;i++)
		{
			if(arr[i])
			{
				printf("\n%d",arr[i]);
			}
		}
		return 0;
	}
