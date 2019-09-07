#include<stdio.h>
int a1[8000000],a2[8000000],a3[8000000];
int main()
{
    a3[0]=0;
    int n,m,i,j,k,l;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);
        for(j=1; j<=m; j++)
        {
            scanf("%d",&a1[j]);
            scanf("%d",&a2[j]);
        }
        l=0;
        for(j=m; j>=1; j--)
        {
            k=a1[j]+a2[j]+l;
            if(k>9)
            {
                a3[j]=k%10;
                l=k/10;
            }
            else
            {
                a3[j]=k%10;
                l=k/10;
            }
        }
        if(l==1) a3[0]=1;
        if(a3[0]==1) for(j=0; j<=m; j++) printf("%d",a3[j]);
        else if(a3[0]==0) for(j=1; j<=m; j++) printf("%d",a3[j]);
        printf("\n");
        if(i!=n) printf("\n");
    }
    return 0;
}
