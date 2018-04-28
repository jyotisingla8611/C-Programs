//array of unions
#include <stdio.h>

	typedef union 
	{
		int x,y;
	}UN;

	int main()
	{
		UN obj[5];
		int i;
		for(i=0;i<5;i++)
		{
			printf("Enter x and y for obj[%d] : ",i);
			scanf("%d %d",&obj[i].x,&obj[i].y);
		}
		for(i=0;i<5;i++)
		{
			printf("\nobj[i]:\n");
			printf("x=%d\ty=%d",obj[i].x,obj[i].y);
		}
	}
