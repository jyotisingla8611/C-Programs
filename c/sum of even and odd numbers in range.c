#include <stdio.h>
    int main()
    {
        int lb,ub,sum_even=0,sum_odd=0,i;
        printf("Enter lower bound : ");
        scanf("%d",&lb);
        printf("Enter upper bound : ");
        scanf("%d",&ub);
        if(ub<lb)
        {
            ub=lb+ub;
            lb=ub-lb;
            ub=ub-lb; //Swapping
        }

        for(i=lb;i<=ub;i++)
        {
            if(i%2==0)
            {
                sum_even+=i;
            }else
            {
                sum_odd+=i;
            }
        }
        printf("\nSum of even numbers : %d",sum_even);
        printf("\nSum of odd numbers : %d",sum_odd);
        return 0;
    }
