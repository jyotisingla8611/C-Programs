#include <stdio.h>
	int main()
	{
		int arr1[4]={32,3,35,8},arr2[4]={8,87,9,3};
		int i;
		int arr3[8],j=0,k=0;
		for(i=0;i<8;i++)
		{
			if(j<k)
			{
				arr3[i]=arr2[j++];
			}else
			{
				arr3[i]=arr1[k++];
			}
		}
		for(i=0;i<8;i++)
		{
			printf("%d\t",arr3[i]);
		}
		
	}
