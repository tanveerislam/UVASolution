#include<stdio.h>
int main()
{
    long long int n,i,j,k,l;
    while(scanf("%lld",&n)==1&&n)
    {
        i=0;
        j=1;
        k=0;
        for(l=1; l<=n; l++)
        {
            k=i+j;
            i=j;
            j=k;
        }
        printf("%d\n",k);
    }
    return 0;
}
