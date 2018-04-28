#include <stdio.h>

    int main()
    {
        int a=11,b=21,res;
        res=a&b;
        printf("%d & %d = %d\n",a,b,res);
        res=a|b;
        printf("%d | %d = %d\n",a,b,res);
        res=a^b;
        printf("%d ^ %d = %d\n",a,b,res);
        return 0;
    }
