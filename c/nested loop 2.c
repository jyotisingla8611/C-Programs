#include <stdio.h>

    int main()
    {
        int a,b;
        for(a=1;a<=5;a++)
        {
            printf("Pass %d - ",a);
            for(b=1;b<=5;b++)
            {
                printf("  %d  ",a);
            }
            printf("\n");
        }
        return 0;
    }
