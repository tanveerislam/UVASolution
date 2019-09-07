#include<stdio.h>
int main()
{
    unsigned long long int a,b,x,y,c=1;
    while(scanf("%llu %llu",&a,&b)==2&&a&&b)
    {
        x=(a*(a-1))/2;
        y=(b*(b-1))/2;
        printf("Case %llu: %llu\n",c,x*y);
        c++;
    }
    return 0;
}
