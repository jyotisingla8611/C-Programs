#include <stdio.h>

    int fibo(int n)
    {
        int k;
        if(n>1)
        {
            k=(fibo(n-1)+fibo(n-2));
            printf("fibo(%d) : %d\n",n,k);
            return k;
        }else
        {
            printf("fibo(%d) : %d\n",n,n);
            return n;
        }
    }

    int main()
    {
        int n;
        int val;
        scanf("%d",&n);
        val=fibo(n);
        printf(" \nvalue : %d",val);
        return 0;
    }
