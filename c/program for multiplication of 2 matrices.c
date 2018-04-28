#include <stdio.h>
	int main()
	{
		int m1[3][3],m2[3][3],p[3][3],i,j,k,sum;
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("Enter value at m1[%d][%d] : ",i,j);
					scanf("%d",&m1[i][j]);
				}
			}
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("Enter value at m2[%d][%d] : ",i,j);
					scanf("%d",&m2[i][j]);
				}
			}
			
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				sum=0;
				for(k=0;k<3;k++)
				{
					sum+=m1[i][k]*m2[k][j];
				}
				p[i][j]=sum;
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",p[i][j]);
			}
			printf("\n");
		}
	}
