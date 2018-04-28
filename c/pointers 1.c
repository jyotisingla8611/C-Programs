#include <stdio.h>
	int main()
	{
		int a=10,b=2;
		int * ptr;
		ptr=&a;
		printf("%d",*ptr);
		printf("\n%d %d",&a,ptr);
	//	ptr=2293312;
	//printf("\n%d %d",ptr,*ptr);
		ptr+=1;
		printf("\n%d",*ptr);
		char ch='a';
		char *ptrc;
		ptrc=&ch;
		printf("\n%c %c",*ptrc,ch);
		printf("\n%d %d",&ch,ptrc);
		*ptrc++;
		printf("\n%c %d",*ptrc,*ptrc);
		return 0;
	}
