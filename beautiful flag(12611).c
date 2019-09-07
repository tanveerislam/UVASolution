#include<stdio.h>
int main()
{
    int n,i,l,w,r,l1,l2,w1,w2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&r);
        l=5*r;
        l1=.55*l;
        l2=.45*l;
        w=3*r;
        w1=.5*w;
        w2=.5*w;
        printf("Case %d:\n",i);
        printf("-%d %d\n",l2,w1);
        printf("%d %d\n",l1,w1);
        printf("%d -%d\n",l1,w2);
        printf("-%d -%d\n",l2,w2);
    }
    return 0;
}
