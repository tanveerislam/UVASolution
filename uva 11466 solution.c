#include<stdio.h>
#include<math.h>
int main()
{
    long long m,n,i,j,k,l,c,num;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        num=fabs(n);
        c=0;
        m=0;
        for(i=2;i*i<=num;i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    if(m!=i) c++;
                    m=i;
                    n/=i;
                }
            }
        }
        if(n!=1&&n!=-1&&n!=num)
        {
            m=fabs(n);
            c++;
        }
        if(c>1) printf("%lld\n",m);
        else printf("-1\n");
    }
    return 0;
}
