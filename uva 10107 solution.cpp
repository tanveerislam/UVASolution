#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

long long a[20000];

int main()
{
    long long m,n,i,j,k,l;
    i=0;
    while(scanf("%lld",&a[i])==1)
    {
        sort(a,a+i+1);
        if(i%2==0)
        {
            n=ceil(i/2);
            printf("%lld\n",a[n]);
        }
        else
        {
            n=i/2;
            m=(a[n]+a[n+1])/2;
            printf("%lld\n",m);
        }
        i++;
    }
    return 0;
}
