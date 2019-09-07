#include<stdio.h>

int phi(long long n)
{
    long long out,i,j,k,l;
    out=n;
    if(n%2==0)
    {
        out=out-(out/2);
        while(n%2==0) n/=2;
    }
    for(i=3;i*i<=n;i=i+2)
    {
        if(n%i==0)
        {
            out=out-(out/i);
            while(n%i==0) n/=i;
        }
    }
    if(n>1) out=out-(out/n);
    return out;
}
int main()
{
    long long m,n,i,j,k,l;
    while(scanf("%lld",&n)==1&&n)
    {
        if(n==1)
        {
            printf("0\n");
            continue;
        }
        m=phi(n);
        printf("%lld\n",m);
    }
    return 0;
}
