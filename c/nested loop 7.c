#include <stdio.h>

    int main()
    {
        char a,b;
        for(a='A';a<='E';a++)
        {
            for(b='A';b<=a;b++)
            {
                printf("  %c  ",b);
            }
            printf("\n");
        }
        return 0;
    }
