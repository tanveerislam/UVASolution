#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double d,v,u,t1,t2;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if(v==u)
            printf("Case %d: can't determine\n",i);
        else if(v>u)
            printf("Case %d: can't determine\n",i);
            else if(u==0||v==0)
            printf("Case %d: can't determine\n",i);
        else
        {
            t1=d/sqrt(u*u-v*v);
            t2=d/u;
            printf("Case %d: %.3lf\n",i,t1-t2);
        }

    }
    return 0;
}

