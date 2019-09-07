#include<stdio.h>
int main()
{
    int t,n,k,p,i,j,m,l;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        if(n==p) printf("Case %d: %d\n",i,k);
        else if(n<p)
        {
            j=p%n;
            l=k+j;
            if(l>n)
            {
                m=l-n;
                printf("Case %d: %d\n",i,m);
            }
            else printf("Case %d: %d\n",i,l);
        }
        else if(n>p)
        {
            if((k+p)<=n) printf("Case %d: %d\n",i,k+p);
            else
            {
                j=k+p;
                l=j-n;
                printf("Case %d: %d\n",i,l);
            }
        }
    }
    return 0;
}
