#include <stdio.h>

    int main()
    {
        int m1,m2,m3,per;
        char grd;
        printf("Enter the marks of three subjects : ");
        scanf("%d %d %d",&m1,&m2,&m3);
        per=(m1+m2+m3)/3;
        if(per>90)
        {
            printf("Grade A\n");
            grd='A';
        }else
        if(per>80)
        {
            printf("Grade B\n");
            grd='B';
        }else
        if(per>70)
        {
            printf("Grade C\n");
            grd='C';
        }else
        if(per>60)
        {
            printf("Grade D\n");
            grd='D';
        }else
        if(per>50)
        {
            printf("Grade E\n");
            grd='E';
        }else
        if(per>40)
        {
            printf("Grade F\n");
            grd='F';
        }else
        {
            printf("Sorry!! You Failed..Better luck next time..\n");
            grd='G';
        }
        switch(grd)
        {
            case 'A' :
            printf("Distinction");
            break;

            case 'B' :
            printf("V.Good");
            break;

            case 'C' :
            printf("Good");
            break;

            case 'D' :
            printf("Fair");
            break;

            case 'E' :
            printf("Not Good");
            break;

            case 'F' :
            printf("Needs improvement");
            break;

            case 'G' :
            printf("Work Hard!!!");
            break;
        }
        return 0;
    }
