#include<stdio.h>
# define max 1100
# define max1 3500
int a[max][max1];
int main()
{
    long long m,n,i,j,k,l,r,c,s;
    a[0][0]=1;
    a[1][0]=1;
    a[2][0]=2;
    a[3][0]=6;
    for(i=4; i<max; i++)
    {
        r=0;
        for(j=0; j<max1; j++)
        {
            a[i][j]+=((a[i-1][j])*i)+r;
            m=a[i][j];
            if(m>9)
            {
                a[i][j]=a[i][j]%10;
                r=m/10;
            }
            else
            {
                a[i][j]=a[i][j]%10;
                r=m/10;
            }
        }
    }
    while(scanf("%lld",&n)==1)
    {
        for(i=max1-1; i>=0; i--)
        {
            if(a[n][i]!=0)
            {
                c=i;
                break;
            }
        }
        s=0;
        for(i=c; i>=0; i--) s+=a[n][i];
        printf("%lld\n",s);
    }

    return 0;
}
