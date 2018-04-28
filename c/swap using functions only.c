#include <stdio.h>

    int main()
    {
        int a,b;
        printf("Enter 2 numbers : ");
        scanf("%d %d",&a,&b);
        swap(a,b);
    }
    void swap(int a, int b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
        printf("a=%d b=%d",a,b);
    }
