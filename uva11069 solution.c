#include<stdio.h>

long long a[77];
int main()
{
    long long n,i,j;
    a[1]=1;
    a[2]=a[3]=2;
    for(i=4; i<77; i++) a[i]=a[i-3]+a[i-2];
    while(scanf("%lld",&n)==1)
        printf("%lld\n",a[n]);
    return 0;
}
