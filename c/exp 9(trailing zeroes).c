#include <stdio.h>
    int main()
    {
        int num,count=0,i=1;
        printf("Enter the number : ");
        scanf("%d",&num);

        while(!(num&i))
        {
            count++;
            i<<=1;
        }
        printf("Trailing Zeroes : %d",count);
        return 0;
    }
