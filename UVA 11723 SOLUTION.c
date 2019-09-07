#include<stdio.h>
int main()
{
    long long r,n,i,l,c;
    l=1;
    while(scanf("%lld %lld",&r,&n)==2&&r&&n)
    {
        if(n+n*26<r) printf("Case %lld: impossible\n",l);
        else
        {
            for(i=0;;i++)
            {
                if(n+n*i>=r) break;
            }
            printf("Case %lld: %lld\n",l,i);
        }
        l++;
    }
    return 0;
}
