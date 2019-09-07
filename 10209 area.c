#include <stdio.h>
#include <math.h>

int main()
{
    double x,y,z,l,a;
    double pi=acos(-1);
    while(scanf("%lf",&x)==1&&x!=0)
    {
        a=x*x;
        y = a * (1 - sqrt(3) + pi / 3);
        z = a * (2 * sqrt(3) - 4 + pi / 3);
        l = a * (4 - sqrt(3) - 2 * pi/ 3);
        printf("%.3f %.3f %.3f\n", y,z,l);
    }
    return 0;
}
