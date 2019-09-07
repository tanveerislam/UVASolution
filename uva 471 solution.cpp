#include<bits/stdc++.h>
#include<iostream>
# define max 9876543210
using namespace std;
int a[10];
int var(long long n)
{
    long long i,j,k,l;
    while(n!=0)
    {
        a[n%10]++;
        n/=10;
    }
    int f=1;
    for(i=0;i<10;i++)
    {
        if(a[i]>0)
        {
            if(a[i]>1)
            {
                f=0;
                break;
            }
        }
    }
    for(i=0;i<10;i++) a[i]=0;
    return f;
}
int main()
{
    long long m,n,i,j,k,l,t,c,f;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        if(i>1) printf("\n");
        scanf("%lld",&n);
        m=max/n;
        for(j=1;j<=m;j++)
        {
            if(var(j)&&var(j*n)) printf("%lld / %lld = %lld\n",j*n,j,n);
        }
    }
    return 0;
}
