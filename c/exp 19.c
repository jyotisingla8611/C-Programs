#include<stdio.h>
#include<math.h>
        int main()
        {
         int num,c=0,result;
         printf("Enter number ");
         scanf("%d",&num);

         result=b_num(num,c);
         d_num(result);
         return 0;
        }
        int b_num(int num,int c)
        {
            int rem,b_num=0,i=0;
            while(num)
            {
             rem=num%2;
             num=num/2;
             b_num=b_num+rem*pow(10,i);
             i++;
            }
            printf("binary number = %d",b_num);
            return(b_num);
        }
        void d_num(int result)
        {
            int r,j=0,d_num=0;
            while(result)
            {
            r=result%10;
            result/=10;
            d_num=d_num+r*pow(2,j);
            j++;
            }
            printf("\ndecimal number = %d",d_num);
        }
