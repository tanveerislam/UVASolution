#include<stdio.h>
int main()
{
    int n,i,j,t,k;
    double av,a[10000],s,c,c1,m;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        s=0;
        c=0;
        scanf("%d",&t);
        for(j=0; j<t; j++)
        {
            scanf("%lf",&a[j]);
            s=s+a[j];
            c=c+1;
        }
        av=s/c;
        c1=0;
        for(k=0; k<c; k++)
        {
            if(av<a[k]) c1=c1+1;
        }
        m=(c1/c)*100;
        printf("%.3lf%%\n",m);
    }
    return 0;
}
