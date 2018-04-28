#include <stdio.h>
    int main()
    {
        char ch;
        int countU=0,countL=0,countN=0;

        while(ch!='*')
        {
            printf("Enter a character : ");
            scanf(" %c",&ch);
            if(ch>=65 && ch<=90)
            {
                countU++;
            }else
            if(ch>=97 && ch<=122)
            {
                countL++;
            }else
            if(ch>=48 && ch<=57)
            {
                countN++;
            }
        }
        printf("\nNumber of uppercase letters : %d",countU);
        printf("\nNumber of lowercase letters : %d",countL);
        printf("\nNumber of numerals : %d",countN);
        return 0;
    }
