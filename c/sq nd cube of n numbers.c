#include <stdio.h>
    int main()
    {
        int num,sq,cube,i;
        printf("Enter the number : ");
        scanf("%d",&num);

        i=1;
        printf("************************************************\n");
        while(i<=num)
        {
            sq=i*i;
            cube=sq*i;
            printf("|\t%d\t|\t%d\t|\t%d\t|\n",i,sq,cube);
            i++;
        }
        printf("************************************************\n");
        return 0;
    }
