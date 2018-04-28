#include <stdio.h>
#include <math.h>
    int main()
    {
        int i,j,num=3;
        char ch;
        for(i=-num;i<=num;i++)
        {
			ch='A';
            for(j=-num;j<=num;j++)
            {
                if(abs(i)+abs(j)>num)
                {
                    printf("%c",ch);
                    ch++;
                }else
                {
                  printf(" ");
                }

            }
            printf("\n");

        }
        return 0;
    }
