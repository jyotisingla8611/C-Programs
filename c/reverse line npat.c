#include <stdio.h>
#include <math.h>
#include <string.h>
	int main()
      {
       	char str[1001];
        int n,i,j,len,end,k;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            {
            	scanf(" %1000[^\n]", str);
              	printf("Case #%d:",i+1);
              	len=strlen(str);
              	end=len-1;
              	for(j=end;j>=0;j--)
                {
                	if(str[j]==' ')
                    {
                    	for(k=j;k<=end;k++)
                        {
                        	printf("%c",str[k]);
                        }
                      
                      	end=j-1;
                    }
                }
          		printf(" ");
          		for(j=0;j<=end;j++)
                {
                	printf("%c",str[j]);
                }
              	printf("\n");              	
            }
      }
