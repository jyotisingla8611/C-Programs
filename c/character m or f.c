#include <stdio.h>

    int main()
    {
        char ch;
        printf("Enter character : ");
        scanf("%c",&ch);

        if(ch>=97 && ch<=122)
        {
            ch-=32;
        }else
        if(ch<65 || ch>90)
        {
            printf("Special character");
        }
        if(ch>=65 && ch<=90)
        {
            if(ch=='M')
                printf("Male");
            else
             if(ch=='F')
                printf("Female");
             else
                printf("Invalid character");
        }
        return 0;
    }
