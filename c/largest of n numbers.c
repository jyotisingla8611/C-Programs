#include <stdio.h>

    int main()
    {
        int n,num,lar=-32768,count=0;
        printf("Enter the numbers : ");
        scanf("%d",&n);

        while(count < n)
        {
            printf("Enter element : ");
            scanf("%d",&num);
            lar=(num>lar)?(num):(lar);
            count++;
        }
        printf("Largest number is %d",lar);
        return 0;
    }
