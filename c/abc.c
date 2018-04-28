#include<stdio.h>
int main()
{
	FILE *fptr=fopen("files/demo.txt","w");
	int a[5],i;
	for (i=0;i<5;i++)
		scanf("%d",&a[i]);
	fwrite (a,sizeof(a),5,fptr);
	fclose(fptr);
}
