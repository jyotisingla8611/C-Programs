#include<stdio.h>
#include<math.h>
        int main()
        {
         int num,c=0,result;
         printf("enter number ");
         scanf("%d",&num);
         result=o_num(num,c);
         d_num(result);
         return 0;
        }

        int o_num(int num,int c)
        {
            int rem,o_num=0,i=0;
            while(num)
            {
             rem=num%8;
             num=num/8;
             o_num=o_num+rem*pow(10,i);
             i++;
            }
            printf("octal number = %d",o_num);
            return(o_num);
        }
        void d_num(int result)
        {
            int r,j=0,d_num=0;
            while(result)
            {
            r=result%10;
            result/=10;
            d_num=d_num+r*pow(8,j);
            j++;
            }
            printf("\ndecimal number = %d",d_num);
        }
