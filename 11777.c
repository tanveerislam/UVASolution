#include<stdio.h>
int main()
{
    double t1,t2,f,a,q,q1,q2,q3,s,u;
    int n,i;
    scanf("%d",&n)==1;

    for(i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf %lf",&t1,&t2,&f,&a,&q1,&q2,&q3);
        if(q1<=q2&&q1<=q3) q=(q2+q3)/2;
        else if(q2<=q1&&q2<=q3) q=(q1+q3)/2;
        else if(q3<=q1&&q3<=q2) q=(q1+q2)/2;
        u=q;
        s=t1+t2+f+a+u;
        if(s>=90) printf("Case %d: A\n",i);
        else if(s>=80) printf("Case %d: B\n",i);
        else if(s>=70) printf("Case %d: C\n",i);
        else if(s>=60) printf("Case %d: D\n",i);
        else if(s<60) printf("Case %d: F\n",i);
    }

    return 0;
}
