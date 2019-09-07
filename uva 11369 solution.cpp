#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<ctype.h>
#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,k,l;
    int a[20100];
    long int s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++) scanf("%d",&a[j]);
        sort(a,a+n);
        s=0;
        for(j=n-3;j>=0;j=j-3) s=s+a[j];
        printf("%ld\n",s);
    }
    return 0;
}
