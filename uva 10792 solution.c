#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b,c;
    double j,k,l,h2,h1,r,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        scanf("%d %d %d",&a,&b,&c);
        double r=a;
        double d=b;
        double h1=c;
        j=sqrt((r*r)-(r-d)*(r-d));
        j=2*j;
        k=asin((r-d)/r);
        l=asin((r-h1)/r);
        h2=h1+j*sin(l-k);
        printf("Case %d: %.4lf\n",i,h2);
    }
    return 0;
}
//Case 1: 10.0000
//Case 2: 8.0342
