#include<stdio.h>
int main()
{
    double a[10];
    double b[10];
    double x,y;
    int m,n,i,j,k,l,f;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a[0],&b[0],&a[1],&b[1],&a[2],&b[2],&a[3],&b[3])==8)
    {
        f=0;
        for(i=0;i<4;i++)
        {
            for(j=i+1;j<4;j++)
            {
                if(a[i]==a[j]&&b[i]==b[j])
                {
                    f=1;
                    x=a[i];
                    y=b[i];
                    break;
                }
            }
            if(f) break;
        }
        printf("%.3lf %.3lf\n",(a[0]+a[1]+a[2]+a[3])-3*x,(b[0]+b[1]+b[2]+b[3])-3*y);
    }
    return 0;
}
