#include <stdio.h>
    int main()
    {
        int num1,num2;
        printf("Enter num1 and num2 : ");
        scanf("%d %d",&num1,&num2);

        num1=num1^num2;
        num2=num1^num2;
        num1=num1^num2;

        printf("\nAfter swapping:\n");
        printf("Num1 : %d\nNum2 : %d",num1,num2);
        return 0;
    }
