#include <stdio.h>

    int main()
    {
        int num1, num2, res;
        printf("Enter 2 numbers : ");
        scanf("%d %d",&num1,&num2);
        printf("Various Arithematic Operations on the numbers are :\n");
        res=num1+num2;
        printf("Sum is %d + %d = %d\n",num1,num2,res);
        res=num1-num2;
        printf("Subtraction is %d - %d = %d\n",num1,num2,res);
        res=num1*num2;
        printf("Multiplication is %d * %d = %d\n",num1,num2,res);
        res=num1/num2;
        printf("Division is %d / %d = %d\n",num1,num2,res);
        res=num1%num2;
        printf("Mod is %d %% %d = %d\n",num1,num2,res);
        return 0;
    }
