#include <stdio.h>
/*enum COLOR{mon,tue,wed,thur,fri,sat,sun}today;
	int main()
	{
	//	today=7;
	//	printf("%d\n",today);
		int i=0;
		for(i=mon;i<=sun;i++)
		{
			printf("%d\n",i);
		}
	}
	===========================================================
	enum week{mon=1,tue,wed=5,thur,fri=10,,sat,sun};
	int main()
	{
		printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",mon,tue,wed,thru,fri,sat,sun);
	}
	===========================================================
	enum state{working,failed};
	enum result{passes,failed};
	int main()
	{
		printf("%d %d",working,passes,failed);
	}
	*/
	enum {working,failed,freezed}curr=freezed;
	int findpos()
	{
		return curr;
	}
	int main()
	{
		findpos()==working?printf("Working"):printf("NOt working");
	}
