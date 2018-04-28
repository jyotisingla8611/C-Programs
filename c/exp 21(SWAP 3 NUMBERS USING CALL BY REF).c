#include <stdio.h>
  void swap(int* a,int* b,int *c)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = *c;
        *c=temp;
           printf("a=%d, b=%d,c=%d",*a,*b,*c);
    }
    int main()
    {
        int a,b,c;
        printf("Enter 3 numbers : ");
        scanf("%d %d %d",&a,&b,&c);
        swap(&a,&b,&c);
        return 0;
    }

