#include <stdio.h>
	int toggle(int n,int i,int j)
	{
		n^=(1<<i);
		n^=(1<<j);
		return n;
	}
	int main()
	{
		int num;
		scanf("%d",&num);
		int i,j;
		scanf("%d %d",&i,&j);
		int res=toggle(num,i,j);
		printf("%d",res);
	}
