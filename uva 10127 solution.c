#include<stdio.h>


int main()
{
    long long n,i,j,c,l;
    while(scanf("%lld",&n)==1)
    {
        if(n%2==0||n%5==0)
        {
            c=0;
            printf("%lld\n",c);
            continue;
        }
        c=1;
        i=1;
        while(i)
        {
            i=i*10+1;
            i=i%n;
            c++;
        }
        printf("%lld\n",c);
    }
    return 0;
}
