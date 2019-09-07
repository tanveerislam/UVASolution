#include<stdio.h>


long long bigmod(long long x,long long y,long long n)
{
    long long i,j,k,l;
    if(y==0) return 1;
    else if(y%2)
    {
        return (((x%n)*(bigmod(x,y-1,n)))%n);
    }
    else
    {
        i=bigmod(x,y/2,n);
        return ((i%n)*(i%n))%n;
    }
}
int main()
{
    long long t,m,n,x,y,i,l;
    while(scanf("%lld",&t)==1&&t)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lld %lld %lld",&x,&y,&n);
            m=bigmod(x,y,n);
            printf("%lld\n",m);
        }
    }
    return 0;
}
