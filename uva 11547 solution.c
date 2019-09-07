#include<stdio.h>
int main()
{
    long long int n,i,a,m,ans;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&m);
        m=m*567;
        m=m/9;
        m=m+7492;
        m=m*235;
        m=m/47;
        m=m-498;
        ans=(m/10)%10;
        if(ans<0) printf("%lld\n",ans*(-1));
        else printf("%lld\n",ans);
    }
    return 0;
}
