#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define fun(x) pow(x,3)-x-4
#define d(x) (3*x*x)-1
int main()
{
int count,n;
float a=0,b=1,x0,x1;
while(((fun(a))*(fun(b)))>0)
{
a++;
b++;
}
printf("\n Initial interval is [%f,%f]",a,b);
x0=a+b/2;
printf("\n first approx root is %f",x0);
printf("\n enter the number of steps");
scanf("%d",&n);
count=2;
while(count<=n)
{
x0=x0-((fun(x0)))/(d(x0));
printf("\nthe %d root is %f",count,x0);

count++;


}
return 0;
}


