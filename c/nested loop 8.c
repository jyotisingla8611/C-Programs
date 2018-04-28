#include <stdio.h>

    int main()
    {
        int a,b,c;
        for(a=1;a<=5;a++)
        {
            c=1;
            for(b=1;b<=5;b++)
            {
                if(b<=5-a)
                {
                    printf("     ");
                }else
                {
                    printf("  %d  ",c);
                c++;
                }
            }
            printf("\n");
        }
        return 0;
    }
