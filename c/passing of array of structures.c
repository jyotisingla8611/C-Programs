#include <stdio.h>

typedef struct
{
	int x;
	int y;
}TEST;

TEST try_(TEST t1[])
{
	int i;
	for( i=0;i<1;i++)
	{
		t1[i].x=50;
		t1[i].y=100;
	}
	return t1;
}

int main()
{
	TEST t[2],a;
	int i;
	for(i=0;i<2;i++)
	{
		t[i].x=9;
		t[i].y=10;	
	}
	
	a=try_(t);
/*	for(i=0;i<2;i++)
	{
		printf("t[%d].x=%d\tt[%d].y=%d\n",i,t[i].x,i,t[i].y);	
	}
*/
printf("%d %d %d",a.x,a.y,t[0].x)	;
	return 0;
}
