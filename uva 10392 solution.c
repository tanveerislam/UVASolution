#include<stdio.h>

int main()
{
    long long m,n,i,j,k,l;
    while(scanf("%lld",&n)==1&&n>0)
    {
        for(i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    printf("    %lld\n",i);
                    n/=i;
                }
            }
        }
        if(n!=1)
        {
            printf("    %lld\n",n);
        }
        printf("\n");
    }
    return 0;
}
