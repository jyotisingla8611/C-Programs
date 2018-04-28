#include <stdio.h>
    int main()
    {
        int num,rev=0,temp=0;
        printf("Enter the number : ");
        scanf("%d",&num);

        temp=num;
        while(temp)
        {
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(rev==num)
        {
            printf("\nPalindrome Number..\n");
        }else
        {
            printf("\nNot a Palindrome Number..\n");
        }
        return 0;
    }
