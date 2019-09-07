#include<stdio.h>
#include<math.h>

#define pi 3.1416
int main()
{
    int t,i;
    double r1,r2,r3,a,b,c,A1,A2,A3,A4,A,s,x,y,z,l,m,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        a=r1+r2;
        b=r2+r3;
        c=r3+r1;
        s=(a+b+c)/2;
        A4=sqrt(s*(s-a)*(s-b)*(s-c));
        l=(b*b+c*c-a*a)/(2*b*c);
        m=(c*c+a*a-b*b)/(2*c*a);
        n=(a*a+b*b-c*c)/(2*a*b);
        x=acos (l);
        y=acos (m);
        z=acos (n);
        A1=(x/(2*pi))*pi*r3*r3;
        A2=(y/(2*pi))*pi*r1*r1;
        A3=(z/(2*pi))*pi*r2*r2;
        A=A4-(A1+A2+A3);
        printf("Case %d: %lf\n",i,A);
    }
    return 0;
}
