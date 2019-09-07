#include<stdio.h>
# define max 1100
# define max1 10000
int a[max][max1];
int main()
{
    int m,n,i,j,k,l,r;
    a[0][0]=a[1][0]=1;
    for(i=2;i<max;i++)
    {
        r=0;
        for(j=0;j<max1;j++)
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
    while(scanf("%d",&n)==1)
    {
        printf("%d!\n",n);
        for(i=max1-1;i>=0;i--)
        {
            if(a[n][i]!=0)
            {
                l=i;
                break;
            }
        }
        for(i=l;i>=0;i--) printf("%d",a[n][i]);
        printf("\n");
    }
    return 0;
}
