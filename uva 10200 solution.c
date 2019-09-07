#include<stdio.h>
#include<math.h>
# define max 10000
long long  a[10100];
int main()
{
    long long m,n,i,j,k,l,f,aa,b,c,x,t;
    double mal,dal,bal;
    l=0;
    for(i=0; i<=max; i++)
    {
        j=i*i+i+41;
        f=0;
        if(j%2==0) continue;
        for(k=2; k<=sqrt(j); k++)
        {
            if(j%k==0)
            {
                f=1;
                break;
            }
        }
        if(!f) l++;
        a[i]=l;
    }
    while(scanf("%lld %lld",&aa,&b)==2)
    {
        if(aa>0) x=a[b]-a[aa-1];
        else x=a[b];
        mal=(double) (x)*100/(b-aa+1)+0.000001;
        printf("%.2lf\n",mal);
    }
    return 0;
}
