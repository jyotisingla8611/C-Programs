#include <stdio.h>
#include <math.h>
	int process(int a,int b)
	{
		int count=0;
		int temp=b;
		while(temp)
		{
			temp/=10;
			count++;
		}
		int res=b+ a*(pow(10,count));
		return res;
	}
	void check(int ec1,int ec2,int *res)
	{
		int sum=ec1+ec2;
		int num=process(ec1,ec2);
		if(num==sum*sum)
		{
			*res=1;
		}else
		{
			*res=0;
		}
	}
	
	int main()
	{
		int ec1,ec2,res;
		scanf("%d %d",&ec1,&ec2);
		check(ec1,ec2,&res);
		if(res==0) printf("Invalid");
		else printf("Valid");
	}
