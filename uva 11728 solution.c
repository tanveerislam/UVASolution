#include<stdio.h>
#include<math.h>


int main()
{
    long n,i,j,k,l,m,s;
    long a[10000];
    for(i=1; i<=2000; i++)
    {
        s=0;
        for(j=1; j<=i; j++) if(!(i%j)) s+=j;
        a[i]=s;
    }
    l=1;
    while(scanf("%ld",&n)==1&&n)
    {
        k=0;
        for(i=2000; i>=1; i--)
        {
            if(n==a[i])
            {
                printf("Case %ld: %ld\n",l,i);
                k=1;
                break;
            }
        }
        if(k==0) printf("Case %ld: -1\n",l);
        l++;
    }
    return 0;
}

