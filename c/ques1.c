#include <stdio.h>
    int main()
    {
        int i1,i2,i3,tot,c10,c5,c2,c1;
        printf("Enter the amount for Item 1 : ");
        scanf("%d",&i1);
        printf("Enter the amount for Item 2 : ");
        scanf("%d",&i2);
        printf("Enter the amount for Item 3 : ");
        scanf("%d",&i3);
        tot=i1+i2+i3;
        printf("\nTotal Expenditure : Rs.%d",tot);
        c10=tot/10;
        c5=(tot%10)/5;
        c2=((tot%10)%5)/2;
        c1=(((tot%10)%5)%2)/1;
        printf("\nNo.of coins of Rs.10 : %d",c10);
        printf("\nNo.of coins of Rs.5 : %d",c5);
        printf("\nNo.of coins of Rs.2 : %d",c2);
        printf("\nNo.of coins of Rs.1 : %d",c1);
        return 0;
    }
