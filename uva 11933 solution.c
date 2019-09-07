#include<stdio.h>
#include<math.h>

int main()
{
    long long m,n,s,i,j,k,count,c;
    while(scanf("%lld",&n)==1&&n)
    {
        m=n;
        s=0;
        count=0;
        i=0;
        while(m!=0)
        {
            k=m%2;
            m/=2;
            if(!k) s=s+0;
            else
            {
                count++;
                if(count%2==1)
                {
                        s+=k*pow(2,i);
                }
            }
            i++;
        }
        printf("%lld %lld\n",s,n-s);
    }
    return 0;
}
