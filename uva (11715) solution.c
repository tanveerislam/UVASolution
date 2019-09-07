#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,a,t,s;
    int c=0,ss;
    while (1)
    {
        c++;
        scanf("%d",&ss);
        if(ss==0) break;
       else if(ss==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",c,s,a);
        }
        else if(ss==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",c,s,t);
        }
        else if(ss==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",c,v,t);
        }
        else if(ss==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",c,u,t);
        }
    }
    return 0;
}
