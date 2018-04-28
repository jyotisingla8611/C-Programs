#include <stdio.h>
    int main()
    {
        int count=-1;
        float avg,num=0,sum=0;

        while(num!=-1)
        {
            sum=sum+num;
            printf("Enter the number :");
            scanf("%f",&num);
            count++;
        }
        if(count!=0)
            avg=sum/count;
        else
            avg=0;
        printf("\nSum=%.2f and Average = %.2f",sum,avg);
    }
