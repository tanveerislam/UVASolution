#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int a,b,t,x,y;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        x=a;
        y=b;
        while(b>0)
        {
            a=a%b;
            t=b;
            b=a;
            a=t;
        }
        if(a==1) printf("%10lld%10lld    Good Choice\n\n",x,y);
        else printf("%10lld%10lld    Bad Choice\n\n",x,y);
    }
    return 0;
}
 //3         5    Good Choice

        //15        20    Bad Choice

    // 63923     99999    Good Choice
