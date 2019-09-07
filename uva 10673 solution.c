#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,x,k,a,b,i,j,p,q;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld",&x,&k);
        if(x==0&&k==0)
        {
            printf("0 0\n");
            continue;
        }
        a=floor((double)x/k);
        b=ceil((double)x/k);
        for(j=0;j*a<=x;j++)
        {
            if((x-(j*a))%b==0)
            {
                q=(x-(j*a))/b;
                break;
            }
        }
        printf("%lld %lld\n",j,q);
    }
    return 0;
}
