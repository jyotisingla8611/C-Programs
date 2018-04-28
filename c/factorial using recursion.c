#include <stdio.h>

    long unsigned facto(long unsigned n)
    {
        long unsigned int k;
        if(n>0)
        {
            k=(n*facto(n-1));
            printf("\nfact(%ld) : %ld",n,k);
            return k;
        }else
        {
            printf("\nfact(%d) : 1",n);
            return 1;
        }
    }

    int main()
    {
        long unsigned n;
        long unsigned fact;
        scanf("%ld",&n);
        facto(n);
        return 0;
    }
