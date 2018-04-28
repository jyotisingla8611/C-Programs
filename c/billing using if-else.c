#include <stdio.h>

    int main()
    {
        int i1,i2,i3;
        float net,bill,disc=0;
        char gender;
        printf("Enter cost of item 1 : ");
        scanf("%d",&i1);
        printf("Enter cost of item 2 : ");
        scanf("%d",&i2);
        printf("Enter cost of item 3 : ");
        scanf("%d",&i3);
        bill=i1+i2+i3;
        printf("\nEnter your Gender(M or F) : ");
        scanf(" %c",&gender);
        printf("Total Amount : Rs.%.2f",bill);
        if(gender!='M'&&gender!='F')
        {
            gender-=32;
        }
        if(gender=='M')
        {
            disc=5;
        }else
        if(gender=='F')
        {
            disc=10;
        }
        if(disc!=0){
            if(bill>=10000)
            {
                disc+=20;
            }
            net=bill-bill*disc/100;
            printf("\n\tNet bill : Rs.%.2f",net);
            printf("\n\tCongratulations!!..You saved Rs.%.2f",(bill*disc/100));
            printf("\n\t**Thank You for Shopping with Us!!!!**");

        }else
        {
            printf("\nOOOPSSS!!!!!  INVALID GENDER!!!!");
        }

       return 0;
    }
