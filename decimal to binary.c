#include <stdio.h>
    int main()
    {
        long num,bin=1,i,a=0,count=1,bin2;
        printf("Enter a number : ");
        scanf("%ld",&num);

        while(num!=0)
        {
            a=num%2;
            bin=bin*10+a;
            num=num/2;
        }

        bin2=reverse(bin);
        bin2=bin2/10;
        printf("%ld",bin2);

    }
    int reverse(long num)
    {
    int i,a;
    long rev=0;
    while(num!=0)
    {
        a=num%10;
        rev=rev*10+a;
        num=num/10;
    }
    return rev;
    }
