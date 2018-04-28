#include <stdio.h>
	int main()
	{
		int n;
		printf("Enter array size : ");
		scanf("%d",&n);
		int i, arr[n];
		printf("Enter array elements : \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		int q;
		printf("Enter no.of queries : ");
		scanf("%d",&q);
		int arr_q[q],j;
		for(i=0;i<q;i++)
		{
			int pos=-1;
			scanf("%d",&arr_q[i]);
			for(j=0;j<n;j++)
			{
				if(arr[j]==arr_q[i])
				{
					pos=j;
				}
			}
			printf("\n%d last occured at index : %d",arr_q[i],pos);
		}
	}
