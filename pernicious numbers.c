#include <stdio.h>
#include <math.h>
    int countOnes(int n)
    {
        int count=0;
        while(n)
        {
            if(n&1)
            {
                count++;
            }
            n>>=1;
        }
        return count;
    }
  //  ============================================
    int prime(int num)
    {
        int i,jasus=0;
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
    // ====================================================================================
    int main()
    {
        int num,count;
        for( num=1;num<100;num++)
            {
                count=countOnes(num);
                if(prime(count))
                {
                    printf("%d\n",num);
                }
            }
    }
