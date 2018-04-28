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
			max=100;
			while(max--)
			{
				if(arr2[max]&1)
				{
				    flag=1;
					printf(" %d occured %d times\n",max,arr2[max]);
				}
			}
			if(flag==0)
            {
                printf(" -1");
            }
		}
	}

