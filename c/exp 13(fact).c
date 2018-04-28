#include <stdio.h>
    int main()
    {
        int num,fact=1;
        printf("Enter the number : ");
        scanf("%d",&num);

        while(num-1)
        {
            fact*=num;
            num--;
        }
        printf("Factorial : %d",fact);
        return 0;
        }
