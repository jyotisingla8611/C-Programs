#include <stdio.h>
    int main()
    {
        char ch;
        int countV=0,countC=0;

        while(ch!='*')
        {
            printf("Enter a character : ");
            scanf(" %c",&ch);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            {
                printf("You entered a vowel\n");
                countV++;
            }else
            {
                printf("You entered a consonant\n");
                countC++;
            }
        }
        printf("\n\nTotal number of vowels : %d\nTotal numbers of vowels : %d",countV,countC);
        return 0;
    }
