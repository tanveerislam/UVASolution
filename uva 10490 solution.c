#include<stdio.h>
#include<math.h>
# define max 1000001
int a[max];
int main()
{
    long long m,n,i,j,k,l,f;
    for(i=2; i<max; i++) a[i]=1;
    k=2;
    for(i=2; i<=sqrt(max); i++)
    {
        for(j=k+k; j<max; j=j+k) a[j]=0;
        k++;
        for(; !a[k]; k++);
    }
    while(scanf("%lld",&n)==1&&n)
    {
        f=0;
        m=pow(2,n)-1;
        j=pow(2,(n-1));
        if(a[n])
        {
            if(m<max)
            {
                if(a[m]) printf("Perfect: %lld!\n",m*j);
                else printf("Given number is prime. But, NO perfect number is available.\n");
            }
            else
            {
                for(i=3; i<=sqrt(m); i=i+2)
                {
                    if(m%i==0)
                    {
                        f=1;
                        break;
                    }
                }
                if(f) printf("Given number is prime. But, NO perfect number is available.\n");
                else printf("Perfect: %lld!\n",m*j);
            }
        }
        else printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
