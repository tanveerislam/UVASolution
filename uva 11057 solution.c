#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long n,m,i,j,k,l,x,y,max,temp;
    long long a[100000];
    while(scanf("%lld",&n)==1)
    {
        for(i=1;i<=n;i++) scanf("%lld",&a[i]);
        scanf("%lld",&m);
        max=3000000;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if((m==(a[i]+a[j]))&&i!=j)
                {
                    if(a[i]<a[j])
                    {
                        l=a[i];
                        k=a[j];
                        if((k-l)<max)
                        {
                            x=l;
                            y=k;
                            max=k-l;
                        }
                    }
                    else
                    {
                        l=a[j];
                        k=a[i];
                        if((k-l)<max)
                        {
                            x=l;
                            y=k;
                            max=k-l;
                        }
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n\n",x,y);
    }
    return 0;
}
