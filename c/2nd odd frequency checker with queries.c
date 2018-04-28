/*
	odd freq checker----automatically detect numbers which is present odd times in array
*/
#include<stdio.h>
	int main()
	{
		int t,max=100;
		printf("Enter test cases : ");
		scanf("%d",&t);
		while(t--)
		{
			int size,i,flag=0;
			printf("\nEnter size of new array : ");
			scanf("%d",&size);
			int arr[size],arr2[100]={0};
			for(i=0;i<size;i++)
			{
			    printf("Enter array elt. : ");
				scanf("%d",&arr[i]);
				arr2[arr[i]]++;
			}
			int q;
			printf("Enter no.of queries : ");
			scanf("%d",&q);
			while(q--)
			{
				int n;
				printf("Enter query : ");
				scanf("%d",&n);
				if(arr2[n]&1)
				{
					printf(" YES\n");
				}else if(arr2[n]==0)
				{
					printf(" -1\n");
				}else
				{
					printf(" NO\n");
				}
			}
			
		}
	}

