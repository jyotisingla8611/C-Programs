//transpose of matrix
#include<stdio.h>
	int main()
	{
		int i,j,a[3][3],t[3][3];
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("Enter value at a[%d][%d] : ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("Youer entered matrix is :\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				t[i][j]=a[j][i];
			}
		}
		printf("Transpose :\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",t[i][j]);
			}
			printf("\n");
		}
	}
