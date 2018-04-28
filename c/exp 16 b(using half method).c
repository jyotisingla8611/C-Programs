#include <stdio.h>
    int main()
    {
        int i,num=2,count=0,flag=0;

        printf("First 100 prime numbers : \n");
        while(count<100)
        {
            flag=0;
            for(i=2 ; i<=(num)/2 ; i++)
            {
                if(num%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("%d\n",num);
                count++;
            }
            num++;
        }
        return 0;
    }
