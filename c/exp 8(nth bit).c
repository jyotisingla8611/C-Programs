#include <stdio.h>
    int main()
    {
        int num,n,bit;
        printf("Enter the number : ");
        scanf("%d",&num);
        printf("Enter n : ");
        scanf("%d",&n);

        bit=1&(num>>(n-1));
        printf("%dth bit of %d is %d",n,num,bit);
        return 0;
    }
