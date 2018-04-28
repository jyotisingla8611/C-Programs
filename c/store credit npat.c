#include <stdio.h>
	int main()
    {
    	int num=0,i=0,credit=0,n=0,j=0,arr[2000],k,l,pos1=0,pos2=0,flag=0;
      	scanf("%d",&num);
      	for(i=0;i<num;i++)
        {
        	scanf("%d",&credit);
          	scanf("%d",&n);
          	for(j=0;j<n;j++)
            {
            	scanf("%d",&arr[j]);
            }
          	flag=0;
         
          	for(k=0;k<n-1;k++)
            {
              if(flag==0){
            	for(l=k+1;l<n;l++)
                {
                	if(arr[k]+arr[l]==credit)
                    {
                    	pos1=k+1;
                      	pos2=l+1;
                      flag=1;
                        break;
                      	
                    }
                }
              }
            }
          
          	printf("Case #%d: %d %d\n",i+1,pos1,pos2);
        }
    }
