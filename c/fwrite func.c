//fwrite(str, sizeof(char), strlen(str), fptr);
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int text=8,s,i;
	scanf("%d",&s);
	int *arr=malloc(4*s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	FILE *fptr=fopen("files/demo.txt","wb");
	fwrite(arr[0],sizeof(int),1,fptr);
	fclose(fptr);
}
