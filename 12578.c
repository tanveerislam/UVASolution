#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
    double l,w,r,a,a1,a2;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&l);
        w=0.6*l;
        r=0.2*l;
        a=l*w;
        a1=pi*r*r;
        a2=a-a1;
        printf("%.2lf %.2lf\n",a1,a2);
    }
    return 0;
}
