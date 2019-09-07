#include<stdio.h>
# define max 32000
long long a[max];
int main()
{
    long a1[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
    long long m,n,i,j,k,l;
    char x;
    a[0]=1;
    for(i=0;i<11;i++)
    {
        for(j=a1[i];j<max;j++)
        {
            a[j]=a[j]+a[j-a1[i]];
        }
    }
    while(scanf("%lld %c %lld",&m,&x,&n)==3)
    {
        l=(m*100)+n;
        if(l==0) break;
        printf("%6.2lf%17lld\n",(double) l/100.0,a[l]);
    }
    return 0;
}
