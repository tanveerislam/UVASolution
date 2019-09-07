#include <stdio.h>
#include<math.h>

# define max 1299799
int a[max];

int main()
{
    long long m,n,i,j,k,l;
    for(i=2;i<max;i++) a[i]=1;
    k=2;
    for(i=2;i<=sqrt(max);i++)
    {
        for(j=k+k;j<max;j=j+k) a[j]=0;
        k++;
        for(;!a[k];k++);
    }
    while(scanf("%lld",&n)==1&&n)
    {
        if(a[n]) printf("0\n");
        else
        {
            for(i=n;;i--) if(a[i]) break;
            for(j=n;;j++) if(a[j]) break;
            printf("%lld\n",j-i);
        }
    }
    return 0;
}
