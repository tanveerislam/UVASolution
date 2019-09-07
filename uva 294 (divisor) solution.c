#include<stdio.h>
#include<math.h>
int main()
{
   unsigned long long int n,i,j,k,l,d,max,a,b,req,m;
   scanf("%llu",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%llu %llu",&a,&b);
       max=0;
       for(j=a;j<=b;j++)
       {

           d=0;
           k=sqrt(j);
           for(l=1;l<=k;l++)
           {
               if(j%l==0) d++;
           }
           if(k*k==j) d=2*d-1;
           else d=2*d;
           m=d;
           if(m>max)
           {
               max=m;
               req=j;
           }
       }
       printf("Between %llu and %llu, %llu has a maximum of %llu divisors.\n",a,b,req,max);
   }
   return 0;
}
//Between 1 and 10, 6 has a maximum of 4 divisors.
//Between 1000 and 1000, 1000 has a maximum of 16 divisors.
//Between 999999900 and 1000000000, 999999924 has a maximum of 192 divisors.
