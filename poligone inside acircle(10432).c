#include<stdio.h>
#include<math.h>
#define pi 2 * acos(0.0)
int main()
{
   double n,r,i,j,k,l,m,a;

    while(scanf("%lf %lf",&r,&n)==2&&r!=0)
    {
        j=(2*pi)/n;
        k=j/2;
        l=r * sin(k);
        m=2*l;
        a=n*(.5*m*sqrt((r*r)-(m*m)/4));
        printf("%.3lf\n",a);
    }
    return 0;
}
