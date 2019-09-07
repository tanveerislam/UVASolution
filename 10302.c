#include<stdio.h>
int main()
{
    long long int n,i,j,s;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        s=0;
        for(i=1;i<=n;i++)
        {
            j=i*i*i;
            s=s+j;
        }
        printf("%lld\n",s);
    }
    return 0;
}
