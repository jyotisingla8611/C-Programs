#include <stdio.h>

    int main()
    {
        int age;
        char ind;
        printf("Enter your age : ");
        scanf("%d",&age);
        printf("Are you an Indian ??(Y/N) : ");
        scanf(" %c",&ind);
        if(ind!='Y')
        {
            ind-=32;
        }
        if(age>=18&&ind=='Y')
        {
            printf("\tCongratulations!!..You are eligible to vote..");
        }else
        {
            printf("\tSorry!!..You are not elegible to vote..");
        }
        return 0;
    }
