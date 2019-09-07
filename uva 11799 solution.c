#include<stdio.h>
int main()
{
    long m,n,i,j,k,l,max;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld",&m);
        max=0;
        for(j=1;j<=m;j++)
        {
            scanf("%ld",&k);
            if(k>max) max=k;
        }
        printf("Case %ld: %ld\n",i,max);
    }
    return 0;
}
