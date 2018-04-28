#include <stdio.h>
#include <math.h>
    int main()
    {
        int num,i,jasus=0;;
        printf("Enter number  : ");
        scanf("%d",&num);

        for(i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                jasus=1;
                break;
            }
        }

        if(jasus==0)
        {
            printf("Prime Number");
        }else
        {
            printf("Composite Number");
        }
    }
