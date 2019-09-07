#include<iostream>
#include<stdio.h>
# define max 700
using namespace std;
typedef long long ll;
ll t1[max];
void phi()
{
    long long i,j,k,l;
    t1[1]=0;
    for(i=2; i<max; i++)
    {
        if(t1[i]==0)
        {
            t1[i]=i-1;
            for(j=i+i; j<max; j+=i)
            {
                if(t1[j]==0) t1[j]=j;
                t1[j]=t1[j]/i*(i-1);
            }
        }
    }
}
ll t2[max];
void div()
{
    long long i,j,k,l;
    for(i=1; i<max; i++)
    {
        for(j=i+i; j<max; j=j+i) t2[j]+=(t1[j/i]*i);
    }
    for(i=2; i<max; i++) t2[i]+=t2[i-1];
}
int main()
{
    phi();
    div();
    long long m,n,i,j,k,l;
    while(scanf("%lld",&n)==1&&n)
        printf("%lld\n",t2[n]);
    return 0;
}
