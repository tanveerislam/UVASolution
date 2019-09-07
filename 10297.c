/*#10297 - Beavergnaw
Solved By:	wesley
Theory Difficulty:	easy
Coding Difficulty:	trivial
Algorithms Used:	3D geometry
math
Solution Description: 	Let CYL be the volume of the cylinder of diameter D and height D.
Let CON be the volume of a cone of diameter D and height D/2.
Let cyl be the volume of the inner cylinder of diameter d and height d.
Let con be the volume of a cone of diameter d and height d/2.
Then we get:

V = CYL - 2*CON + 2*con - cyl

pi*r^2*h is the volume of a cylinder, and pi*r^2*h*(1/3) is the volume of a cone,
so substitute those in as needed, and solve for d.

At the end, we get:

d = ((pi*D^3 - 6V) / pi)^(1/3)*/
#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
   long long int D,V;
    double d,v,i,j,k,l,dd;
    while(scanf("%lld %lld",&D,&V)==2)
    {
        if(D==0&&V==0) break;
        d=D;
        v=V;
        i=(pi*d*d*d)/4.0;
        j=2.0*(1.0/3.0)*pi*(d/2.0)*(d/2.0)*(d/2.0);
        k=(i-j)-v;
        dd=cbrt((6*k)/pi);
        printf("%.3lf\n",dd);
    }
    return 0;
}
