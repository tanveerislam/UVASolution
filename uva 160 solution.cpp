#include<bits/stdc++.h>

using namespace std;

long long a[100];
int main()
{
    long long m,n,i,j,k,l,f,f1,c,max;
    while(scanf("%lld",&n)==1&&n)
    {
        max=0;
        for(i=n;i>=2;i--)
        {
            j=i;
            for(k=2;k*k<=j;k++)
            {
                if(j%k==0)
                {
                    if(max<k) max=k;
                    while(j%k==0)
                    {
                        a[k]++;
                        j/=k;
                    }
                }
            }
            if(j!=1)
            {
                a[j]++;
                if(max<j) max=j;
            }
        }
        c=0;
        f1=1;
        for(i=0;i<=max;i++) if(a[i]) c++;
        if(c==15) f1=0;
        printf("%3lld! =",n);
        c=0;
        f=1;
        for(i=0;i<=max;i++)
        {
            if(a[i])
            {
                c++;
                printf("%3lld",a[i]);
                a[i]=0;
            }
            if(c==15&&f&&f1)
            {
                printf("\n%6c",' ');
                f=0;
            }
        }
        printf("\n");
    }
    return 0;
}
