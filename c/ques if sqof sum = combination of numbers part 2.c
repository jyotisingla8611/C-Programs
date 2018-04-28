#include <stdio.h>
#include <math.h>
	int dig(int a)
	{
		int count=0;
		while(a)
		{
			count++;
			a/=10;
		}
		return count;
	}
	int is_int(int num)
	{
		int a=num*num,c,d,i,count;
		count=dig(a);
		
			c=a%100;
			d=a/100;
			if(c+d==num)
			{
				return 1;
			}
	
		return 0;
	}
	int main()
	{
		int count=0,i;
		for(i=3;i<100;i++)
		{
			if(is_int(i))
			{
				printf("%d\n",i);
				count++;
			}
		}
		printf("Total : %d",count);
		return 0;
	}
