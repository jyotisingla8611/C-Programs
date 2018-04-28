#include <stdio.h>
	int main()
	{
		int arr1[4]={3,11,15,21},arr2[9]={2,9,10,11,16,22,31,46,50};
		int i;
		int arr3[13],j=0,k=0;;
		while(j<4 && k<9)
		{
			if(arr1[j]<arr2[k])
			{
				arr3[i++]=arr1[j++];
			}else
			{
				arr3[i++]=arr2[k++];
			}
		}
		for(i=0;i<13;i++)
		{
			printf("%d\t",arr3[i]);
		}
	}
