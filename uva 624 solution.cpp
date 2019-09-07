#include<bits/stdc++.h>

using namespace std;
long long a[50];
long long a1[50];
int main()
{
    long long m,n,i,j,k,l,N,s,max,c;
    while(scanf("%lld",&N)==1)
    {
        scanf("%lld",&n);
        for(i=0; i<n; i++) scanf("%lld",&a[i]);
        m=pow(2,n)-1;
        max=0;
        for(i=m; i>=0; i--)
        {
            s=0;
            c=0;
            for(j=0; j<n; j++) if(i&(1<<j)) s+=a[j];
            if(s<=N&&s>max)
            {
                max=s;
                for(j=0; j<n; j++)
                    if(i&(1<<j))
                    {
                        a1[c]=a[j];
                        c++;
                    }
                    l=c;
            }
        }
        for(i=0;i<l;i++) printf("%lld ",a1[i]);
        printf("sum:%lld\n",max);
    }
    return 0;
}
