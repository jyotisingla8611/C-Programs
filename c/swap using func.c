#include <stdio.h>

    int main()
    {
        int a,b,sum;
        printf("Enter 2 numbers : ");
        scanf("%d %d",&a,&b);
        swap(&a,&b);
        printf("a=%d, b=%d",a,b);
        return 0;
    }

    void swap(int* a,int* b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
