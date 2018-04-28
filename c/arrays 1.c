#include <stdio.h>
	int main()
	{
		int i,sum=0,n;
		float avg=0;
		
		printf("Enter n : ");
		scanf("%d",&n);
		
		int arr[n];
		
		for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		sum+=arr[i];
		}
		
		printf("Sum= %d",sum);
		avg=sum/n;
		printf("\navg= %.1f",avg);
		
	}
