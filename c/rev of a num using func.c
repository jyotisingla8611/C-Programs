#include<stdio.h>

int main()
{
    int num,rev;
    printf("Enter the number : ");
    scanf("%d",&num);
    rev=reverse(num);
    printf("%d",rev);
    return 0;
}

int reverse(int num)
{
    int i,a, rev=0;
    while(num!=0)
    {
        a=num%10;
        rev=rev*10+a;
        num=num/10;
    }
    return rev;
}
