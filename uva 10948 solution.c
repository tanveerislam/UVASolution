#include<stdio.h>
#include<math.h>

# define max 1050000
char a[max];
int main()
{
    long long n,m,i,j,k,l,f;
    for(i=2;i<max;i++) a[i]=1;
    k=2;
    for(i=2;i<=sqrt(max);i++)
    {
        for(j=k+k;j<max;j=j+k) a[j]=0;
        k++;
        for(; !a[k];k++);
    }
    while(scanf("%lld",&n)==1&&n)
    {
        printf("%lld:\n",n);
        f=0;
        for(i=2;i<=(n/2);i++)
        {
            if(a[i]&&a[n-i])
            {
                printf("%lld+%lld\n",i,n-i);
                f=1;
                break;
            }
        }
        if(!f) printf("NO WAY!\n");
    }
    return 0;
}

