#include <stdio.h>
    int main()
    {
        int tick,chld,amnt,pymnt,disc=0,prc;
        float net;
        char seat;
        printf("Enter the total no.of tickets: ");
        scanf("%d",&tick);
        printf("Enter the number of children( <5 yrs ): ");
        scanf("%d",&chld);
        seats:
        printf("\nSelect seat(Gold or Silver) Enter (G/S) : ");
        scanf(" %c",&seat);
        switch(seat)
        {
            case 'g':
            case 'G':
                prc=200;
                break;
            case 's':
            case 'S':
                prc=150;
                break;
            default :
                printf("\nSeat not Available...Please select within range..");
                goto seats;
        }
        amnt=(tick-chld)*prc;
        printf("\nTotal Amount :Rs.%d",amnt);

        if(amnt>2000)
        {
            printf("\n\nCongratulations!! You get a flat 20%% discount");
            disc=20;
        }else
        if(amnt>1500)
        {
             printf("\n\nCongratulations!! You get free coffee worth Rs.300");
        }else
        if(amnt>1000)
        {
            printf("\n\nCongratulations!! You get free popcorn tub worth Rs.200");
        }

        printf("\n\nPayment Methods :\n1.Cash\n2.Credit Card-Axis Bank(10%% off)\n3.Credit Card-Others(5%% off)\nEnter method( 1-3 ): ");
        scanf("%d",&pymnt);
        if(pymnt==2)
        {
            disc+=10;
        }else
        if(pymnt==3)
        {
            disc+=5;
        }

        net=amnt-amnt*disc/100;
        printf("\n\n\tTotal amount to be paid : Rs.%.1f",net);
        if(amnt!=net)
            {
                printf("\n\tCongratulations!! You Saved Rs.%.1f",amnt-net);
            }
        printf("\n\n\t\t**Enjoy Your Movie**\n\n");
        return 0;
    }
