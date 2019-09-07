#include<stdio.h>
#include<math.h>
int main()
{
    long m,n,i,j,k,l,a,b,x,y,c;
    double mal;
    scanf("%ld",&m);
    for(x=1; x<=m; x++)
    {
        scanf("%ld",&n);
        c=0;
        for(i=0; i<=sqrt(n); i++)
        {
            for(j=i; j<=sqrt(n); j++)
            {
                k=sqrt(n-i*i-j*j);
                mal=sqrt(n-i*i-j*j);
                if(k==mal)
                {
                    c=1;
                }
                if(c) break;
            }
            if(c) break;
        }
        if(c) printf("%ld %ld %ld\n",i,j,k);
        else printf("-1\n");
    }
    return 0;
}
