#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>

using namespace std;
long long a[60];
void cal()
{
    long long i,j,k,l;
    a[1]=1;
    a[2]=2;
    for(i=3; i<60; i++) a[i]=a[i-1]+a[i-2];
}
int main()
{
    long long m,n,i,j,k,l,t,f;
    cal();
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        f=0;
        for(j=59;j>=1;j--)
        {
            if(a[j]<=n)
            {
                printf("1");
                n-=a[j];
                f=1;
            }
            else if(f)
            {
                printf("0");
                f=1;
            }
        }
        printf("\n");
    }
    return 0;
}
