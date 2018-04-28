#include <stdio.h>
#include<math.h>
	int main()
	{
		int n=100;
		char c='a';
		int arr5[n+1];
		int i;
		for(i=1;i<=n;i++)
		{
			arr5[i]=pow(5,i);
		}
		long arr_m[100]={0};
		for(i=1;i<101;i++)
		{
			int k=1,temp=i;
			while(temp)
			{
				if(temp&1)
				{
					arr_m[i]+=arr5[k];
				}
				k++;
				temp>>=1;
			}
			printf("%c. ",c++);
			printf("%d\n",arr_m[i]);
			
		}
		
	}
