//gauss elimination
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
int i,j,k,n;
float A[20][20],C,X[10],sum=0.0;
printf("\nEnter the order of matrix: ");
scanf("%d",&n);
printf("\nEnter the elements of augmented matrix row-wise: \n\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=(n+1);j++)   //4th column represent the last value i.e B
//for(j=1;j<=n;j++)
{
printf("A[%d][%d]: ",i,j);
scanf("%f",&A[i][j]);
}
}
for(j=1;j<=n;j++)
{
for(i=1;i<=n;i++)
{
if(i>j)
{
C=A[i][j]/A[j][j];
for(k=1;k<=n+1;k++)
{
A[i][k]=A[i][k]-C*A[j][k]; //i,k diagonal element to execute this (we make upper triangulrization)
}
}
}
}
X[n]=A[n][n+1]/A[n][n];
for(i=n-1;i>=1;i--)
{
sum=0;
for(j=i+1;j<=n;j++)
{
sum=sum+A[i][j]*X[j];
}
X[i]=(A[i][n+1]-sum)/A[i][i];
}
printf("\nThe solution is : \n");
for(i=1;i<=n;i++)
{
printf("\nX %d=%f\t",i,X[i]);
}
}
/* 10
-7
3
5
-6
8
4
7
2
6
9
-1
*/
