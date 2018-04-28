#include <stdio.h>

/*The Euclidean algorithm is based on the principle that
the greatest common divisor of two numbers does not change
if the larger number is replaced by its difference with the
smaller number.*/

    int euclid(int a, int b)
    {
        while (a != b)
        {
            if (a > b)
            {
                 a = a - b;
            }
            else
            {
                b = b - a;
            }
        }
        return a;		// or b (since both are equal)
    }

    int main()
    {
        int a,b;
        printf("Enter the numbers :");
        scanf("%d %d",&a,&b);
        printf("Euclid(%d, %d) = %d", a, b, euclid(a, b));
        return 0;
    }
