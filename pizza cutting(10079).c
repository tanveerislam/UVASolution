#include<stdio.h>
int main()
{
    long long int n,i,j;
    while(scanf("%lld",&n)==1)
    {
        if(n<0) break;
        else
        {
            i=(n*(n+1))/2;
            j=i+1;
            printf("%lld\n",j);
        }
    }
    return 0;
}
