#include <stdio.h>

    int main()
    {
        int a,b,c=0;
        for(a=1;a<=5;a++)
        {
            for(b=1;b<=a;b++)
            {
                printf("  %d  ",c++);
            }
            printf("\n");
        }
        return 0;
    }
