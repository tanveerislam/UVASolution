#include<stdio.h>
int main()
{
    long long int G,L,i,j,k,a,b;
    int n,t;
    scanf("%d",&n);
    for(t=1;t<=n;t++)
    {
        scanf("%lld %lld",&G,&L);
        k=1;
        a=b=1;
        i=1;
        while(k&&a<=L)
        {
            a=G*i;
            i++;
            b=(G*L)/a;
            if(b%G==0&&b%L==0)
            {
                 k=0;
            }
        }
        if(!k) printf("%lld %lld\n",a,b);
        else printf("-1\n");
    }
    return 0;
}
