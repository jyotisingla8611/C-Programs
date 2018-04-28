#include <stdio.h>

	int prime(int num)
    {
        int i,jasus=0;
        if(num==1)
        {
        	return 0;
		}
         for(i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                jasus=1;
                break;
            }
        }
        

        if(jasus==0)
        {
            return 1;
        }else
        {
            return 0;
        }

    }

	int main()
	{
		int i,j,size,count,arr2[10]={0};
		printf("Enter size : ");
		scanf("%d",&size);
		int arr[size];
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
			int temp=arr[i];
			while(temp)
			{
				arr2[temp%10]++;
				temp/=10;
			}
		}
		printf("\nFreq of prime digits : \n");
		for(i=2;i<10;i++)
		{
			if(prime(i))
			{
				printf("\n%d occured %d times",i ,arr2[i]);
			}
		}
		
		printf("\n\nFreq of odd digits : \n");
		for(i=1;i<10;i++)
		{
			if(i&1)
			{
				printf("\n%d occured %d times",i ,arr2[i]);
			}
		}
		
		printf("\n\nFreq of even digits : \n");
		for(i=0;i<10;i++)
		{
			if(!(i%2))
			{
				printf("\n%d occured %d times",i ,arr2[i]);
			}
		}
		
	}
