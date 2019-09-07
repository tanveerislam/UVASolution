#include<stdio.h>
int main()
{
    long long int m,n,i,j,k,l,s,c;
    scanf("%lld",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%lld",&n);
        c=0;

        for(j=1;;j++)
        {
             s=0;
            l=n;
            while(l!=0)
            {
                s=s*10+l%10;
                l=l/10;
            }
            if(s==n) break;
            else
            {
                s=s+n;
                n=s;
                c++;
                continue;
            }

        }
        printf("%lld %lld\n",c,s);
    }
    return 0;
}
