#include<stdio.h>
int main()
{
    int m,n,x,y;
    long double t,u;
    double i,j,k,l,a,b,c,d,mal;
    while(scanf("%d %d %d %d",&m,&n,&x,&y)==4)
    {
        a=m;
        b=n;
        c=x;
        d=y;
        b=a-b;
        t=1;
        for(j=1;j<=b;j++)
        {
            t=t*a;
            t/=j;
            a--;
        }
        d=c-d;
       u=1;
       for(j=1;j<=d;j++)
       {
           u=u*c;
           u/=j;
           c--;
       }
       mal=t/u;
       printf("%.5lf\n",mal);
    }
    return 0;
}
