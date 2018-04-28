//fseek(fptr,7,SEEK_SET);
//ftell() and frewind();
#include <stdio.h>
int main()
{
	FILE *fptr=fopen("files/demo1.txt","w");
	fseek(fptr,7,SEEK_SET);
	fputs("Jai Shree RRammm JII",fptr);
	fclose(fptr);
}
