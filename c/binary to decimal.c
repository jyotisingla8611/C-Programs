#include <stdio.h>
#include<math.h>
	int main()
	{
		long bin,dec=0;
		printf("Enter a binary number : ");
		scanf("%ld",&bin);
		bin_to_dec(bin);
		return 0;
	}

	void bin_to_dec(long a)
	{
		int num=0,i,temp;
		for(i=0;a!=0;i++)
		{
		    temp=(a%10);
			num+=temp*pow(2,i);
			a/=10;
		}
		printf("%d",num);
	}
