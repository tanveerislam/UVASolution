#include<stdio.h>
#include<math.h>

# define max 100000000
char a[max];
int main()
{
    long long n,m,i,j,k,l,f;
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

        if(n%2!=0)
        {
            if(a[n-2]) printf("%lld is the sum of 2 and %lld.\n",n,n-2);
            else printf("%lld is not the sum of two primes!\n",n);
        }
        else
        {
            f=0;
            l=0;
            for(i=n/2;i<n; i++)
            {
                if(a[(n/2)-l]&&a[i]&&(n/2)-l!=i)
                {
                    printf("%lld is the sum of %lld and %lld.\n",n,n-i,i);
                    f=1;
                    break;
                }
                l++;
            }
            if(!f) printf("%lld is not the sum of two primes!\n",n);
        }

    }
    return 0;
}
