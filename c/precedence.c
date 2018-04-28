#include <stdio.h>

    int main()

    {
        int a=0,b=1,c=-1;
        printf("For a=0, b=1, c=-1");
        a+=b-=c*10;
        printf("\n\na+=b-=c*10 =>> a = %d",a);
        a=0;
        b=1;
        c=-1;
        int d=--a*(5+b)/2-c++*b;
        printf("\n\n--a*(5+b)/2-c++*b =z %d\n\n",d);
        return 0;
    }
