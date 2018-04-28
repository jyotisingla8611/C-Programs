#include <stdio.h>
#include<math.h>
	int main()
	{
		long oct,dec=0;
		printf("Enter a octal number : ");
		scanf("%ld",&oct);
		oct_to_dec(oct);
		return 0;
	}

	void oct_to_dec(long a)
	{
		int num=0,i;
		for(i=0;a!=0;i++)
		{
			num+=(a%10)*pow(8,i);
			a/=10;
		}
		printf("%d",num);
	}
