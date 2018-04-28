#include <stdio.h>
#include <string.h>
	int main()
	{
		char str1[20],str2[20];
		int l1,l2,i=0,j=0,flag;
		printf("Enter str1 : ");
		gets(str1);
		l1=strlen(str1);
		printf("Enter str2 : ");
		gets(str2);
		l2=strlen(str2);
		for(i=0;i<l1;i++)
		{
			flag=0;
			if(str1[i]==str2[j])
			{
				flag=1;
				while(flag && i<(l1-l2) && j<l2)
				{
					i++;
					j++;
					if(str1[i]!=str2[j])
					{
						flag=0;
					}
				}
			}
		}
	}
