#include<stdio.h>
int main()
{
    int n,i;
    double c,d,f,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf",&c,&d);
        f=(9*c+160)/5;
        a=f+d;
        b=(5*a-160)/9;
        printf("Case %d: %.2lf\n",i,b);
    }
    return 0;
}
