#include <stdio.h>
	void largest(int *num1, int *num2,int *num3,int *res)
	{
		int a=*num1,b=*num2,c=*num3,r=*res;
		
		*res=(a>b)?(a>c)?a:c:(b>c)?b:c;	
	}
	
	int main()
	{
		int num1,num2,num3;
		int *p1=&num1, *p2=&num2, *p3=&num3;
		int res;
		scanf("%d %d %d",p1,p2,p3);
		largest(p1,p2,p3,&res);
		printf("largest is %d", res);
		return 0;
	}
