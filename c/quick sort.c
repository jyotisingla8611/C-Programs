#include <stdio.h>
#include <stdlib.h>
	int part(int *a,int p,int r)
	{
		int pivot=a[r];
		int i,j=p-1,temp;
		for(i=p;i<r;i++)
		{
			if(a[i]<=pivot)
			{
				j++;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		j++;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		return j;
	}
	
	void QS(int *a,int p,int r)
	{
		int q;
		if(p<r)
		{
			q=part(a,p,r);
			QS(a,p,q-1);
			QS(a,q+1,r);
		}
	}

	int main()
	{
		int size;
		scanf("%d",&size);
		int *arr=malloc(sizeof(int)*size);
		int i;
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		QS(arr,0,size-1);
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
		return 0;
	}
