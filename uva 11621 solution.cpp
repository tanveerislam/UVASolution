#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    long long m,n,i,j,k,l;
    long long p2,p3;
    long long a[2000];
    p2=0;
    p3=0;
    a[0]=1;
    for(i=1;i<=330;i++)
    {
        a[i]=min(2*a[p2],3*a[p3]);

        if(a[i]==2*a[p2]) p2++;
        if(a[i]==3*a[p3]) p3++;
    }
    while(scanf("%lld",&n)==1&&n)
    {
        if(n==1)
        {
            printf("1\n");
            continue;
        }
        for(i=1;a[i]<n;i++);
        printf("%lld\n",a[i]);
    }
    return 0;
}
