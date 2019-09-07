#include<iostream>
#include<stdio.h>
# define max 100100
using namespace std;
long long a[100];
int main()
{
    long long m,n,i,j,k,l,t,f,s;

    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&m);
        for(j=m-50;j<m;j++)
        {
            f=0;
            k=j;
            s=0;
            while(k!=0)
            {
                s+=(k%10);
                k/=10;
            }
            s+=j;
            if(s==m)
            {
                printf("%lld\n",j);
                f=1;
                break;
            }
        }
        if(!f) printf("0\n");
    }
    return 0;
}
