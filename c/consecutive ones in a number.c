#include <stdio.h>

	int cons_ones(int num)
	{
		int max=0,i,count=0;
		for(i=0;i<32;i++)
		{
			if(num&1==1)
			{
				count++;
			}else
			{
				if(count>max)
				{
					max=count;
					count=0;
				}
			}
			num>>=1;
		}
		return max;
	}
	
	int main()
	{
		int num;
		scanf("%d",&num);
		int count=cons_ones(num);
		printf("%d",count);
		return 0;
	}
