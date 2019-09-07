#include<stdio.h>
int main()
{
    int n;
    long long int i,j,g,l,a,b;
    while(scanf("%d",&n)==1&&n)
    {
        g=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                a=j;
                b=i;
                for(;;)
                {
                    l=a%b;
                    if(l==0) break;
                    a=b;
                    b=l;
                }
                g=g+b;
            }
        }
        printf("%lld\n",g);
    }
    return 0;
}
