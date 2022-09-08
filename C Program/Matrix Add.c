#include<stdio.h>
int main()
{
 int a[10] [10],b[10] [10],sum[10] [10],i,j;
 printf("Enter First Array Value= ");
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         scanf("%d",&a[i][j]);
     }
 }
 printf("Show First Array= \n");
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         printf("%d\t",a[i][j]);
     }
     printf("\n");
 }
 printf("Enter Second Array Value= ");
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         scanf("%d",&b[i][j]);
     }
 }
 printf("Show Second Array= \n");
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         printf("%d\t",b[i][j]);
     }
     printf("\n");
 }

 printf("Show Result= \n");
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         sum[i][j] = a[i][j] + b[i][j];
         printf("%d\t",sum[i][j]);
     }
     printf("\n");
 }
}
