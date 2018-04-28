#include <stdio.h>
#include <stdlib.h>

	void swap(int *a,int *b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}

	int main()
	{
		int n;
		scanf("%d",&n);
		int *arr=malloc(sizeof(int)*n);
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		int p,c,flag;
		for(p=1;p<n;p++)
		{
			flag=0;
			for(c=0;c<n-p;c++)
			{
				if(arr[c]<arr[c+1])
				{
					flag=1;
					swap(&arr[c],&arr[c+1]);
				}
			}
			if(!flag)
			{
				break;
			}
		}
		for(i=0;i<5;i++)
		{
			printf("%d\t",arr[i]);
		}
	}
