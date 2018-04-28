#include <stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
	int main()
	{
		int arr[5]={1,3,5,2,4};
		int i,j;
		for(i=0;i<4;i++)
		{
			for(j=0;j<5-i-1;j++)
			{
				if(arr[j]<arr[j+1])
				{
					swap(&arr[j],&arr[j+1]);
				}
			}
		}
		for(i=0;i<5;i++)
		{
			printf("%d\t",arr[i]);
		}
	}
