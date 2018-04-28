#include <stdio.h>
    int main()
    {
        int a,b,choice;
        printf("Enter 2 numbers: ");
        scanf("%d %d",&a,&b);

        printf("Press\n1. for addition\n2. for subtraction\n3.for multiplication\n4.for reaminder\n5.for quotient :   ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 :
            sum(a,b);
            break;

            case 2 :
            sub(a,b);
            break;

            case 3 :
            mul(a,b);
            break;

            case 4 :
            rem(a,b);
            break;

            case 5 :
            div(a,b);
            break;
        }
    }

    void sum(int a,int b)
    {
        printf("sum= %d",a+b);
    }

    void sub(int a,int b)
    {
        printf("sub= %d",a-b);
    }

    void mul(int a,int b)
    {
        printf("mul= %d",a*b);
    }

    void rem(int a,int b)
    {
        printf("rem= %d",a%b);
    }

    void div(int a,int b)
    {
        printf("sum= %d",a/b);
    }
