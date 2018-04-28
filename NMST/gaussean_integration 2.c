#include<stdio.h>
 #include<math.h>

 float g(float d)
 {
   float f;
   f=1+d;
   return(f);
  }

 void main()
 {
   FILE *fp1;
   int  n,i,m;
   float u[100],w[50],sum,sum1,a,b,p1;
   fp1=fopen(“abc.dat”,”r”);
   printf(“type the number of points”);
   scanf(“%d ”, &n);
   printf(“type the lower limit a and upper limit b”);
   scanf(“%f%f ”, &a,&b);
   m=n/2;
   for(i=0; i<=n; i++)
   {
    fscanf(fp1,”%f%f”,&u[i],&w[i]);
    u[i+m] =- u[i];
    w[i+m] = w[i];
    printf(“u[i]=%f, w[i]=%f \n”,u[i],w[i]);
    }
    sum = 0;
    for(i=0; i<=n; i++)
    {
     p1= g((b-a)/2*u[i]+ (b+a)/2);
     sum = sum + w[i]*p1;
     }
     sum = sum *(b-a)/2;
     printf(“required integral = %f\n”, sum1);
     fclose(fp1);
     getch();
     }
