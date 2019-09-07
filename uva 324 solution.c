#include<stdio.h>
# define max 370
# define max1 812
int a[max][max1];
int main()
{
    int m,n,i,j,k,l,r,c,s;
    int a1[10];
    a[0][0]=1;
    a[1][0]=1;
    for(i=2;i<max;i++)
    {
        r=0;
        for(j=0;j<max1;j++)
        {
            a[i][j]=(a[i-1][j])*i+r;
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
    for(i=0;i<10;i++) a1[i]=0;
    while(scanf("%d",&n)==1&&n)
    {
        for(i=max1-1;i>=0;i--)
        {
            if(a[n][i]!=0)
            {
                l=i;
                break;
            }
        }
        for(i=l;i>=0;i--)
        {
            k=a[n][i];
            a1[k]++;
        }
        printf("%d! --\n",n);
        for(i=0;i<10;i++)
        {
            printf("   (%d)%4d",i,a1[i]);
            if(i==4) printf("\n");
        }
        printf("\n");
        for(i=0;i<10;i++) a1[i]=0;
    }
    return 0;
}
/*3! --
   (0)    0    (1)    0    (2)    0    (3)    0    (4)    0
   (5)    0    (6)    1    (7)    0    (8)    0    (9)    0
8! --
   (0)    2    (1)    0    (2)    1    (3)    1    (4)    1
   (5)    0    (6)    0    (7)    0    (8)    0    (9)    0
100! --
   (0)   30    (1)   15    (2)   19    (3)   10    (4)   10
   (5)   14    (6)   19    (7)    7    (8)   14    (9)   20*/
