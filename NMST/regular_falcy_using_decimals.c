#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define fun(x) pow(x,3)-x-4
int main()
{
int count,n;
float a=0,b=1,x1,x2=0;
while(((fun(a))*(fun(b)))>0)
{
a++;
b++;
}
printf("\n Initial interval is [%f,%f]",a,b);
x1=((a*(fun(b))-b*(fun(a))))/((fun(b))-(fun(a)));
printf("\n first root is %f",x1);



while(fabs(x1-x2)>0.0001)
{
    x2=x1;
if((fun(a))*(fun(x1))<0)
   {
b=x1;
printf("\n now the interval is [%f,%f]",a,b);

}
else
{
        a=x1;
printf("\n now the interval is [%f,%f]",a,b);
}
x1=((a*(fun(b))-b*(fun(a))))/((fun(b))-(fun(a)));

printf("\n root is %f",x1);

}
return 0;
}

