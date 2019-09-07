#include<stdio.h>
#include<math.h>
int main()
{
    int i,t;
    double x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,x9,y9,m=1,n=2,a,b,c,u,v,w,A,AA;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
        if(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)==0) break;
        else
        {
            x4=(m*x3+n*x2)/(m+n);
            y4=(m*y3+n*y2)/(m+n);
            x5=(m*x1+n*x3)/(m+n);
            y5=(m*y1+n*y3)/(m+n);
            x6=(m*x2+n*x1)/(m+n);
            y6=(m*y2+n*y1)/(m+n);
            a=(y4-y1)/(x4-x1);
            b=(y5-y2)/(x5-x2);
            c=(y6-y3)/(x6-x3);
            u=y4-a*x4;
            v=y5-b*x5;
            w=y6-c*x6;
            x7=(u-v)/(b-a);
            y7=(b*u-a*v)/(b-a);
            x8=(v-w)/(c-b);
            y8=(c*v-b*w)/(c-b);
            x9=(w-u)/(a-c);
            y9=(a*w-c*u)/(a-c);
            A=x7*(y8-y9)+x8*(y9-y7)+x9*(y7-y8);
            AA=fabs(.5*A);
        }
        printf("%.0lf\n",AA);
    }
    return 0;
}
