//take decimal no.as input and store its binary number in an array and print it
#include <stdio.h>
	int dec_to_bin(int a)
	{
		int bin_arr[32]={0},i=31;
			while(a)
		{
			
			bin_arr[i--]=a&1;
		
			a>>=1;
			
		}
		for(a=0;a<=31;a++)
		{
			printf("%d",bin_arr[a]);
		}
		printf("\n");
	}
	int main()
	{
		int size=0,i=0;
		int arr[10]={0};
	
		
		while(size<9)
		{
			scanf("%d",&arr[i]);
			if(arr[i++]!=-1)
			{
				size++;
			}else
			{
				break;
			}
		}
		for(i=0;i<size;i++)
		{
			dec_to_bin(arr[i]);
		}
		/*while(a)
		{
			bin_arr[i++]=a%2;
			a/=2;
		}*/
		
	
	}
