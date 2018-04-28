#include <stdio.h>
#include <math.h>
	int main()
	{
		int num,temp,s1=0,s2=0,a,count=0,pos;
		printf("Enter number : ");
		scanf("%d",&num);
		printf("Enter position : ");
		scanf("%d",&pos);
		temp=num;
		while(count<pos)
		{
			s1+=temp%10;
			temp/=10;
	
			s2+=temp%10;
			temp/=10;
			count++;
		}
		while(temp)
		{
			s2+=temp%10;
			temp/=10;
			s1+=temp%10;
			temp/=10;
		}
		if((s1-s2)%11==0)
		{
			a=0;
		}else
		{
			a=11-abs(s1-s2)%11;
		}
		printf("\nWe should add %d",a);
	}
