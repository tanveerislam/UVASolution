#include<stdio.h>
int main()
{
    long long n,m,m1,m2,i,j,k,l,cas,t;
    scanf("%lld",&cas);
    for(t=1;t<=cas;t++)
    {
        scanf("%lld %lld",&n,&m);
        l=0;
        for(i=1;i<=m;i++)
        {
            scanf("%lld",&m1);
            k=1;
            for(j=1;j<=m1;j++)
            {
                scanf("%lld",&m2);
                k=(k*m2)%n;
            }
            l=(l+k)%n;
        }
        printf("%lld\n",l);
    }
    return 0;
}
