#include <stdio.h>
    int main()
    {
        int num,i,rem;
        char str[6];

        printf("Enter a number : ");
        scanf("%d",&num);
        printf("%x\n",num);
        for(i=5;i>=0;i--)
        {
             rem=num%16;
             num=num/16;
             if(rem<10)
             {
                str[i]=rem+48;
             }else
             {
                str[i]=rem+55;
             }
        }
        for(i=0;i<6;i++)
        {

            printf("%c",str[i]);
        }
        return 0;
    }
