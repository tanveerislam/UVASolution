#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
# define max 100005

using namespace std;

long long d[max];
double s[max];
void func()
{
    long long m,n,i,j,k,l,c;
    d[1]=1;
    s[1]=1;
    for(i=2;i<max;i++)
    {
        j=sqrt(i);
        for(k=1;k<=j;k++)
        {
            if(i%k==0)
            {
                d[i]+=2;
                s[i]+=(k+(i/k));
            }
        }
        if(i==j*j)
        {
            d[i]--;
            s[i]-=j;
        }
    }
}
int main()
{
    long long m,n,i,j,k,l,c;
    double f;
    func();
    scanf("%lld",&l);
    for(i=1;i<=l;i++)
    {
        scanf("%lld %lld %lld",&m,&n,&k);
        m=ceil((m/(double)k))*k;
        c=0;
        f=0;
        for(j=m;j<=n;j=j+k)
        {
            c+=d[j];
            f+=s[j];
        }
        printf("%lld %.0lf\n",c,f);
    }
    return 0;
}
