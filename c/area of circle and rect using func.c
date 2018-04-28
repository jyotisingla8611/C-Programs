#include <stdio.h>
    int main()
    {
        int num1,num2,rad;
        float area;
        printf("Enter radius of circle : ");
        scanf("%d",&rad);
        circle(rad);

        printf("\nEnter height and width : ");
        scanf("%d %d",&num1,&num2);
        area=rect(num1,num2);
        printf("\nArea : %.2f",area);
    }

    void circle(int rad)
    {
        float ar=3.14*rad*rad;
        printf("\nArea=%.2f",ar);

    }
     int rect(int a, int b)
    {
        return(a*b);
    }
