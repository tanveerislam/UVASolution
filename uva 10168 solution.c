#include<stdio.h>
#include<math.h>
# define max 10010000

char a[max];

int main()
{
    long long m,n,i,j,k,l;
    for(i=2; i<max; i++) a[i]=1;
    k=2;
    for(i=2; i<=sqrt(max); i++)
    {
        for(j=k+k; j<max; j=j+k) a[j]=0;
        k++;
        for(; !a[k]; k++);
    }
    while(scanf("%lld",&n)==1)
    {
        if(n<8)
        {
            printf("Impossible.\n");
        }
        else
        {
            if(n%2==0)
            {
                printf("2 2 ");
                n-=4;
            }
            else if(n%2==1)
            {
                printf("2 3 ");
                n-=5;
            }
            for(i=2; i<=n; i++)
            {
                if(a[i]&&a[n-i])
                {
                    printf("%lld %lld\n",i,n-i);
                    break;
                }
            }
        }
    }
    return 0;
}
