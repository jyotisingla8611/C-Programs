#include<stdio.h>
#include<string.h>
int main()
{
	char ch[5][100];
	int i=0;
	while(i<5)
	{
		scanf("%s",ch[i]);
		i++;
	}
	for(i=0;i<5;i++)
	{
		printf("%0.3s",ch[i]);
	}
}
