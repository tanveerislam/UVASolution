#include<stdio.h>
#include<math.h>
int main()
{
    long long int l,f;
    double i,j;
    while(scanf("%lld %lld",&l,&f)==2&&l&&f)
    {
        i=sqrt(2*l*f);
        j=(3600*i)/(2*l);
        printf("%.8lf %.8lf\n",i,j);
    }
    return 0;
}
