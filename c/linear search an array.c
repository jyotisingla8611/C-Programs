#include <stdio.h>
	int main()
	{
		int i,sum=0,n,wanted=0;
		float avg=0;
		
		printf("Enter n : ");
		scanf("%d",&n);
		
		int arr[n];
		
		for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
		
		printf("Enter number to search : ");
		scanf("%d",&wanted);
		
		int count=0;
		
		
		for(i=0;i<n;i++)
		{
			if(arr[i]==wanted)
			{
				count++;
				printf("\nFound at position %d",i+1);
			}
		}
		printf("\nFound total %d times",count);
	
	}
