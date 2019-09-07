#include<stdio.h>
int main()
{
    long long int n,sum;
    while (scanf("%lld",&n)==1)
    {
        sum=((n*(n+2))/2)*3-6;
        printf("%lld\n",sum);
    }
    return 0;
}
