#include<stdio.h>
int main()
{
    long int m,n,i,j,k,l,a,b,c;
     for(i=6;i<=200;i++)
     {
         n=i*i*i;
         for(j=2;j<200;j++)
         {
             a=j*j*j;
             for(k=j;k<=200;k++)
             {
                 b=k*k*k;
                 for(l=k;l<=200;l++)
                 {
                     c=l*l*l;
                     if(n==a+b+c)
                     {
                         printf("Cube = %ld, Triple = (%ld,%ld,%ld)\n",i,j,k,l);
                     }
                 }
             }
         }
     }
    return 0;
}
