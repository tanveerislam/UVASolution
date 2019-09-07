#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define E 2.7182818284
int p,q,r,s,t,u;
double absolute(double d)
{
    if(d<0)
        return -d;
    return d;
}
double f(double x)
{
    return p*pow(E,-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}
int main()
{
    double hi,lo,mid;
    while(scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)==6)
    {
        if(f(1)*f(0)>0)
            puts("No solution");
        else
        {
            hi = 1;
            lo = 0;
            if(f(1)<f(0))
            {
                hi = 0;
                lo = 1;
            }
            while(absolute(hi-lo)>1e-9)
            {
                mid = (hi+lo)/2.00;
                if(f(mid)<0)
                    lo = mid;
                else
                    hi = mid;
            }
            printf("%.4lf\n",(hi+lo)/2.00);
        }
    }
    return 0;
}
