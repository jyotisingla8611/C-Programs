#include <stdio.h>

    int main()
    {
        int chldrn=0,adlt=0,snr_ctzn=0,srl=0;
        char lang;
        printf("Choose the language :\n");
        printf("1. Hindi(H)\n");
        printf("2. English(E)\n");
        printf("3. Punjabi(P)\n");
        printf("Enter your choice(H/E/P) : ");
        scanf("%c",&lang);
        printf("\nChoose the movie you want to watch...\n");
        switch(lang)
        {
          case 'h':
          case 'H':
                {
                    printf("\n1. Jab Harry Met Sejal(Comedy)");
                    printf("\n2. Ye Hai India(Action)");
                    printf("\n3. Mubarakan(Comedy)");
                    printf("\n4. Munna Michael(Action)");
                    printf("\n5. Indu Sarkar(History)");
                }
                break;
          case 'e':
          case 'E':
                {
                    printf("\n6. Dunkirk(Comedy)");
                    printf("\n7. Spider Man: Homecoming(Action)");
                    printf("\n8. despicable 3(Animation-comedy)");
                    printf("\n9. War of the Planet of Apes(Action)");
                    printf("\n10. Berlin Syndrome(History)");
                }
                break;
          case 'p':
          case 'P':
                {
                    printf("\n11. Manje Bistre(Comedy)");
                    printf("\n12. Super Singh(Action)");
                    printf("\n13. Vekho Barataan Challiyan(Romantic Drama)");
                    printf("\n14. Channa Mereya(Romantic)");
                    printf("\n15. Crazy Tabbar(Action)");
                }
                break;
          default :
                    printf("\nSorry!!! Option Not Available..We're working to add more...");
        }
        printf("\n\nEnter the movie serial no. : ");
        scanf("%d",&srl);
        printf("\n\nEnter the no. of children(Below 10) : ");
        scanf("%d",&chldrn);
        printf("Enter the no. of senior citizens(above 60) : ");
        scanf("%d",&snr_ctzn);
        printf("Enter the no. of Adults : ");
        scanf("%d",&adlt);


        printf("\n\n\n\t\t***Reciept***\n\n");
        printf("\n\tMovie Number : %d",srl);
        printf("\n\tChildren : %d\t \tRs.%d\n",chldrn,chldrn*170);
        printf("\tAdults : %d\t \tRs.%d\n",adlt,adlt*200);
        printf("\tSenior Citizens : %d     Rs.%d\n",snr_ctzn,snr_ctzn*150);
        printf("\tTotal :\t\t\tRs.%d",chldrn*170+adlt*200+snr_ctzn*150);
        printf("\n\n\n\t   ***Enjoy Your Movie***\n\n\n");
        return 0;
    }
