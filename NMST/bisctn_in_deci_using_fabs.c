#include<stdio.h>
#define fun(x) pow(x,3)-(4*x)-9
void main()
{
float a,b,X,Y;
float mid;
//for finding the interval start from 0,1
a=0;
b=1; //to check the intermediate property,find out function
X=fun(a);
Y=fun(b);
while((fun(a))*(fun(b))>0)//if positive then a=1,b=2 and so on
    {
    a++;
    b++;
    }
    printf("\n The interval of a function is [%f,%f]",a,b);
 //for first approximate root, find the midpoint of a function
 mid=(a+b)/2;
 printf("\n The first approximate root of fun(x) is %f",mid); //for second approx find fun

while(fabs(a-b)>0.0001)
{
    if((fun(a))*(fun(mid))<0)
    {
        a=a;
        b=mid;
        printf("\n Now interval is [%f,%f]",a,mid);
    }
    else
    {
    a=mid;
    b=b;
    printf("\n Now interval is [%f,%f]",mid,b);
    }
    mid=(a+b)/2;
    printf("\n  approximate root is %f",mid);

}
}
