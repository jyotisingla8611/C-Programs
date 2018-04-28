#include <stdio.h>
	int main()
	{
		int arr[11]={0},size,i,n;
		printf("Enter size : ");
		scanf("%d",&size);
		printf("Enter elements :\n");
		for(i=1;i<=size;i++)
		{
			scanf("%d",&n);
			arr[n]++;
		}
		int max=-1,temp,count0=0,max1;
		for(i=1;i<11;i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
				max1=i;
			}
			if(arr[i]==0)
			{
				count0++;
			}
		}
		printf("Max : %d\nNo of Vacant floors : %d",max1,count0);
	}
