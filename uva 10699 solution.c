#include<stdio.h>
#include <stdlib.h>
# define max 1000000
long long a[max];
int main()
{
    long long m,n,i,j,k,l,c;
    while(scanf("%lld",&n)==1&&n)
    {
        m=labs(n);
        l=0;
        for(i=2;i*i<=m;i++)
        {
            if(m%i==0)
            {
                while(m%i==0&&m/i>=0)
                {
                    a[l]=i;
                    l++;
                    m/=i;
                }
            }
        }
        if(m!=1)
        {
            a[l]=m;
            l++;
        }
        k=a[0];
        j=1;
        for(i=1;i<l;i++)
        {
            if(a[i]!=k)
            {
                j++;
                k=a[i];
            }
        }
        printf("%lld : %lld\n",n,j);
    }
    return 0;
}
