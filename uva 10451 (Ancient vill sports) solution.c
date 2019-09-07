#include<stdio.h>
#include<math.h>
# define pi 2*acos(0)
int main()
{
    int n,i=1;
    double a,a1,A,A1,A2,m,j,k,l;
    while(scanf("%d",&n)==1&&n>=3)
    {
        scanf("%lf",&A);
        m=n;
        l=n*sin((2*pi)/m);
        a=sqrt((2*A)/l);
        A1=pi*a*a;
        j=A1-A;
        a1=a*cos(pi/m);
        A2=pi*a1*a1;
        k=A-A2;
        printf("Case %d: %.5lf %.5lf\n",i,j,k);
        i++;
    }
    return 0;
}
