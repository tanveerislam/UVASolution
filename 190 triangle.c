#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x,y,m1,m2,r,c;
    char a,b,s;
    while(scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        x4=.5*(x3+x2);
        y4=.5*(y3+y2);
        x5=.5*(x2+x1);
        y5=.5*(y2+y1);
        m1=(y3-y2)/(x3-x2);
        m2=(y2-y1)/(x2-x1);
        if(m1!=0&&m2!=0)
        {
            x=(-m1*(x5+m2*y5)+m2*(x4+y4*m1))/(m2-m1);
            y=(-(x4+m1*y4)+(x5+m2*y5))/(m2-m1);
        }
        else if(m1==0)
        {
            x=x4;
            y=(x5-m2*y5-x4)/m2;
        }
        else if(m2==0)
        {
            x=x5;
            y=(x4-m1*y4-x5)/m1;
        }

        r=sqrt(pow(x-x1,2)+pow(y-y1,2));
        c=-x*x-y*y+r*r;
        if(x<0) a='+';
        else a='-';
        if(y<0) b='+';
        else b='-';
        if(c<0) s='+';
        else s='-';
        if(x!=0&&y==0)
        {
            printf("(x %c %.3f)^2+ y^2 = %.3f^2\n",a,fabs(x),r);
            printf("x^2 + y^2 %c %.3lfx %c %.3lf = 0\n\n", a, fabs(2*x), s, fabs(c));
        }
        else if(x==0&&y!=0)
        {
            printf("x^2 + (y %c %.3lf)^2 = %.3lf^2\n", b, fabs(y), r);
            printf("x^2 + y^2 %c %.3lfy %c %.3lf = 0\n\n", b, fabs(2*y), s, fabs(c));
        }
        else if(x!=0&&y!=0)
        {
            printf("(x %c %.3lf)^2 + (y %c %.3lf)^2 = %.3lf^2\n", a, fabs(x), b, fabs(y), r);
            printf("x^2 + y^2 %c %.3lfx %c %.3lfy %1c %.3lf = 0\n\n", a, fabs(2*x), b, fabs(2*y), s, fabs(c));
        }

    }
    return 0;
}
