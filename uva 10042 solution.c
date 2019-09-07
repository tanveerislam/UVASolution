#include<stdio.h>
int main()
{
    long long m,n,i,j,k,s1,s2,t,v,w;
    scanf("%lld",&v);
    for(t=1; t<=v; t++)
    {
        scanf("%lld",&w);
        for(i=w+1;; i++)
        {
            j=i;
            k=i;
            s1=0;
            s2=0;
            while(k)
            {
                s1+=k%10;
                k/=10;
            }
            for(m=2; m*m<=j; m++)
            {
                if(j%m==0)
                {
                    while(j%m==0)
                    {
                        n=m;
                        while(n!=0)
                        {
                            s2+=n%10;
                            n/=10;
                        }
                        j/=m;
                    }
                }
            }
            if(j==i) continue;
            if(j!=1)
            {
                while(j)
                {
                    s2+=j%10;
                    j/=10;
                }
            }
            if(s1==s2)
            {
                printf("%lld\n",i);
                break;
            }
        }
    }
    return 0;
}
