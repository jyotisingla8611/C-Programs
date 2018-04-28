#include <stdio.h>
    int main()
    {
        int num,oct=1,i,a=0,count=1,oct2;
        printf("Enter a decimal number : ");
        scanf("%d",&num);

        while(num!=0)
        {
            a=num%8;
            oct=oct*10+a;
            num=num/8;
        }

        oct2=reverse(oct);
        oct2=oct2/10;
        printf("%ld",oct2);

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
