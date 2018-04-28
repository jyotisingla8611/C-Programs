// selection Sort

#include <stdio.h>
#include <stdlib.h>

	void swap(int *a,int *b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}
	int small(int *arr,int si,int pos)
	{
		int sm=pos,i;
		for(i=pos+1;i<si;i++)
		{
			if(arr[sm]>arr[i])
			{
				sm=i;//getting the position of smallest elt.
			}
		}
		return sm;
	}
	void selection_sort(int *arr,int s)
	{
		int i,k;
		for(i=0;i<s-1;i++)
		{
			k=small(arr,s,i);
			swap(&arr[i],&arr[k]);
		}
	}
	void display(int *arr,int s)
	{
		int i;
		for(i=0;i<s;i++)
		{
			printf("%d\t",arr[i]);
		}
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
		selection_sort(arr,n);
		display(arr,n);
	}
