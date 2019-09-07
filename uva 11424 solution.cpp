#include<iostream>
#include<stdio.h>
# define max 200010
using namespace std;
typedef long long ll;
ll t[max];
void phi()
{
    long long i,j,k,l;
    t[1]=0;
    for(i=2; i<max; i++)
    {
        if(t[i]==0)
        {
            t[i]=i-1;
            for(j=i+i; j<max; j=j+i)
            {
                if(t[j]==0) t[j]=j;
                t[j]=t[j]/i*(i-1);
            }
        }
    }
}
ll t1[max];
void div()
{
    long long i,j,k,l;
    for(i=1; i<max; i++)
    {
        for(j=i+i; j<max; j=j+i) t1[j]+=(t[j/i]*i);
    }
    for(i=2; i<max; i++) t1[i]+=t1[i-1];
}
int main()
{
    phi();
    div();
    long long m,n,i,j,k,l;
    while(scanf("%lld",&n)==1&&n)
        printf("%lld\n",t1[n]);
    return 0;
}
