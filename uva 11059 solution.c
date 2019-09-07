#include<stdio.h>
long long a[1000];

long long pow_(long long n)
{
    long long i,j,k,l;
    k=0;
    for(i=0; i<n; i++)
    {
        l=1;
        for(j=i; j<n&&l; j++)
        {
            l*=a[j];
            if(l>k)
                k=l;
        }
    }
    return k;
}
int main()
{
    long long m,n,i,j,k,l,c=1;
    while(scanf("%lld",&n)==1)
    {
        for(i=0; i<n; i++) scanf("%lld",&a[i]);
        printf("Case #%lld: The maximum product is %lld.\n\n",c,pow_(n));
        c++;
    }
    return 0;
}
