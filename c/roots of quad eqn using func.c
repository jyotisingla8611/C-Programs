#include <stdio.h>
#include <math.h>
    int main()
    {
        int a,b,c;
        printf("Enter the coefficients of x2, x and constant value : ");
        scanf("%d %d %d",&a,&b,&c);
        root(a,b,c);
        return 0;
    }
    void root(int a, int b,int c)
    {
        int r1,r2;
        if((b*b - 4*a*c)>=0)
        {
            r1=(-b+sqrt(b*b-4*a*c))/2;
            r2=(-b-sqrt(b*b-4*a*c))/2;
            printf("root1=%d\nroot2=%d",r1,r2);
        }else
        printf("Non-real roots");
    }
