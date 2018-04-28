#include <stdio.h>
    int main()
    {
        int num,count=0;
        printf("Enter number : ");
        scanf("%d",&num);

        while(num)
        {
            if(num&1==1)
            {
                count++;
            }
            num/=2;
        }
        if(count==1)
        {
            printf("\nYES!!..Number is a power of 2..\n");
        }else
        {
            printf("\nNO!!....Number is not a power of 2..\n");
        }
        return 0;
    }
