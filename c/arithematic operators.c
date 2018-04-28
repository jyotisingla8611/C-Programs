#include <stdio.h>

    int main()
    {
        int num1, num2, res;
        printf("Enter 2 numbers : ");
        scanf("%d %d",&num1,&num2);
        printf("Various Arithematic Operations on the numbers are :\n");
        res=num1+num2;
        printf("%d + %d = %d\n",num1,num2,res);
        res=num1-num2;
        printf("%d - %d = %d\n",num1,num2,res);
        res=num1*num2;
        printf("%d * %d = %d\n",num1,num2,res);
        res=num1/num2;
        printf("%d / %d = %d\n",num1,num2,res);
        res=num1%num2;
        printf("%d %% %d = %d\n",num1,num2,res);
        return 0;
    }
