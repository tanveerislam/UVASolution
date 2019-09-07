#include<bits/stdc++.h>

using namespace std;

long long a[5900];
int main()
{
    long long n,i;

    long long p2,p3,p5,p7;
    p2=0;
    p3=0;
    p5=0;
    p7=0;
    a[0]=1;
    for(i=1;i<5900;i++)
    {
        a[i]=min(min(2*a[p2],3*a[p3]),min(5*a[p5],7*a[p7]));

        if(a[i]==2*a[p2]) p2++;
        if(a[i]==3*a[p3]) p3++;
        if(a[i]==5*a[p5]) p5++;
        if(a[i]==7*a[p7]) p7++;
    }
    while(scanf("%lld",&n)==1&&n)
    {
        printf("The %lld",n);
        if(n%10==1&&(n/10)%10!=1) printf("st");
        else if(n%10==2&&(n/10)%10!=1) printf("nd");
        else if(n%10==3&&(n/10)%10!=1) printf("rd");
        else printf("th");
        printf(" humble number is %lld.\n",a[n-1]);
    }

    return 0;
}
