#include<stdio.h>
#include<math.h>
# define max 10001
# define max1 3500
int a[max][max1];
int main()
{
    int m,n,i,j,k,l,r;
    a[0][0]=1;
    a[1][0]=1;
    a[2][0]=2;
    a[3][0]=6;
    for(i=4;i<max;i++)
    {
        r=0;
        for(j=0;j<max1;j++)
        {
            a[i][j]=(a[i-1][j]*i)+r;
            m=a[i][j];
            if(m>9)
            {
                a[i][j]=m%10;
                r=m/10;
            }
            else
            {
                a[i][j]=m%10;
                r=m/10;
            }
        }
    }
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<max1-1;i++)
        {
            if(a[n][i]!=0)
            {
                l=a[n][i];
                break;
            }
        }
        printf("%5d -> %d\n",n,l);
    }
    return 0;
}
