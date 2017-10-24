// binary search
#include <stdio.h>
#include <stdlib.h>
	int main()
	{
		int s;
		scanf("%d",&s);
		int *arr=malloc(4*s);
		int beg=0,end=s-1,mid=(beg+end)/2;
		int i;
		for(i=0;i<s;i++)
		{
			scanf("%d",&arr[i]);
		}
		int e;
		printf("Enter elt to search : ");
		scanf("%d",&e);
		int flag=0;
		while(beg<end)
		{
			mid=(beg+end)/2;
			if(arr[mid]==e)
			{
				printf("Found at %d",mid);
				flag=1;
				break;
			}else if(arr[mid]<e)
			{
				beg=mid+1;
			}else
			{
				end=mid-1;
			}
		}
		if(!flag)
		{
			printf("Sorryyyyyyy...!!!!!Not Founddd >>>>!!!!");
		}
	}
