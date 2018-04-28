#include <stdio.h>
    int main()
    {
        int a=0,b=1,c=0,count=0,len;
        printf("Enter the length of seris : ");
        scanf("%d",&len);

        printf("\n");
        while(count<len)
        {
            printf(" %d ",c);
            a=b;
            b=c;
            c=a+b;
            count++;
        }
        printf("\n");
        return 0;
    }
