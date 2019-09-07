#include<stdio.h>
int main()
{
    double m,n,i,j,k,l;
    while(scanf("%lf %lf",&k,&l)==2&&k&&l)
    {
        m=k;
        n=l;
        n=m-n;
        j=1;
        for(i=1;i<=n;i++)
        {
            j=j*m;
            j=j/i;
            m--;
        }
        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",k,l,j);
    }
    return 0;
}
