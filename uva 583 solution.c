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
        if(n<0)
        printf("%lld = -1 x ",n);
        else
        printf("%lld = ",n);
        for(i=0;i<l;i++)
        {
            printf("%lld",a[i]);
            if(i!=l-1)
            printf(" x ");
        }
        printf("\n");
    }
    return 0;
}
