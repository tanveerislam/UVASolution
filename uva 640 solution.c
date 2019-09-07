#include<stdio.h>
# define max 1000090
int a[max];
int main()
{
    long long n,i,j,k,l,s;
    for(i=1;i<max;i++)
    {
        j=i;
        s=0;
        while(j!=0)
        {
            s+=(j%10);
            j/=10;
        }
        s=s+i;
        a[s]=1;
    }
    for(i=1;i<=1000000;i++)
    {
        if(a[i]==0) printf("%lld\n",i);
    }
    return 0;
}
