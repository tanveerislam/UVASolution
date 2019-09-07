#include<stdio.h>
int main()
{
    long long m,n,x,y,i,j,k,l,max,c;
    while(scanf("%lld %lld",&m,&n)==2&&m&&n)
    {
        if(m>n)
        {
            x=n;
            y=m;
        }
        else
        {
            x=m;
            y=n;
        }
         max=0;
        for(i=x;i<=y;i++)
        {
            c=0;
            j=i;

            for(k=1;;k++)
            {
                if(j%2==0) j=j/2;
                else j=3*j+1;
                c++;
                if(j==1) break;
            }

            if(c>max)
            {
                max=c;
                l=i;
            }

        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",x,y,l,max);
    }
    return 0;
}
