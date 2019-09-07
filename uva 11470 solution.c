#include<stdio.h>
int main()
{
    int a[10][10];
    int n,i,j,k,l,x,y,t,u,v,cas=1;
    long int s;
    while(scanf("%d",&n)==1&&n)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++) scanf("%d",&a[i][j]);
        }
        k=n/2;
        l=n-k;
        x=0;
        y=n;
        u=0;
        v=n-1;
        printf("Case %d:",cas);
        for(i=0;i<l;i++)
        {
            s=0;
            for(j=x;j<y;j++)
            {
                if(j==x) for(t=x;t<y;t++) s=s+a[j][t];
                else if(j>x&&j<(y-1)) s=s+(a[j][u]+a[j][v]);
                else  for(t=x;t<y;t++) s=s+a[j][t];

            }
            printf(" %ld",s);
            x++;
            y--;
            u++;
            v--;
        }
        printf("\n");
        cas++;
    }
    return 0;
}

