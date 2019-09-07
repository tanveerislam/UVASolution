#include<stdio.h>
long long int mod(long long b,long long p,long long m);
int main()
{
    long long b,p,m,n,i,j,k,l;
    while(scanf("%lld %lld %lld",&b,&p,&m)==3)
    {
        i=mod(b,p,m);
        printf("%lld\n",i);
    }
    return 0;
}
long long int mod(long long b,long long p,long long m)
{
    long long c;
    if(!p) return 1;
    else if(p%2)
    {
        return ( (b%m) * mod (b,p-1,m) % m);
    }
    else
    {
        c=mod(b,p/2,m);
        return ( (c%m) * (c%m) ) % m;
    }
}
