#include<stdio.h>
long long a1[10000],a2[10000];
int main()
{
    long long m,n,i,j,k,l,c;
    while(scanf("%lld",&n)==1)
    {
        m=n*n;
        c=0;
        for(i=1;i<=n;i++)
        {
            if(m%i!=0) continue;
            j=m/i;
            k=j+n;
            l=i+n;
            a1[c]=k;
            a2[c]=l;
            c++;
        }
        printf("%lld\n",c);
        for(i=0;i<c;i++) printf("1/%lld = 1/%lld + 1/%lld\n",n,a1[i],a2[i]);
    }
    return 0;
}
