#include<stdio.h>
#include<math.h>
int main()
{
    double m,n,p;
    while(scanf("%lf %lf",&n,&p)==2)
    {
        m=pow(p,1/n);
        printf("%.0lf\n",m);
    }
    return 0;
}
