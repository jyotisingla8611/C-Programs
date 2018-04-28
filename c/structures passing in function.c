#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int x;
	int y;
}TEST;

void try_(TEST *t1)
{
	t1->x = 50;
	t1->y = 100;
}

int main()
{
	TEST t;
	t.x=9;
	t.y=10;
	try_(&t);
	printf("t.x=%d\nt.y=%d",t.x,t.y);
	return 0;
}
