#include <stdio.h>
	int main()
	{
		int size,arr2[10]={0};
		printf("Enter size : ");
		scanf("%d",&size);
		int i,arr[size];
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
			int temp=arr[i];
			while(temp)
			{
				arr2[temp%10]++;
				temp/=10;
			}
		}
		for(i=0;i<10;i++)
		{
			printf("\n%d : %d\n",i,arr2[i]);
		}
	}
