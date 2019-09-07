#include<stdio.h>
#include<math.h>
int main()
{
    long m,n,i, j,k,l,x,y;
    while(scanf("%ld",&n)==1&&n)
    {
        m= sqrt(n);
        i=n-m*m;
        if(i==0)
        {
            x=1;
            y=m;
        }
        else if(i<=m+1)
        {
            x=i;
            y=m+1;
        }
        else
        {
            x=m+1;
            y=2*m+2-i;
        }
        if(m%2==0)
        {
            j=x;
            x=y;
            y=j;
        }
        printf("%ld %ld\n",x,y);
    }
    return 0;
}
