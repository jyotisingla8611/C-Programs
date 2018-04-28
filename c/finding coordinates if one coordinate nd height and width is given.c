#include <stdio.h>
	int main()
	{
		int x,y,l,b;
		printf("Entre lower left coord : ");
		scanf("%d %d",&x,&y);
		printf("Enter length and breadth : ");
		scanf("%d %d",&l,&b);
		printf("\nUpper left coord : %d %d",x,y+l);
		printf("\nUpper right coord : %d %d",x+b,y+l);
		printf("\nLower right coord : %d %d",x+b,y);
	}
