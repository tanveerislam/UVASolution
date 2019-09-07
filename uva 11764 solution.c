#include<stdio.h>
int main()
{
    int m,n,i,j,k,l;
    int a[400];
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++) scanf("%d",&a[j]);
        k=0;
        l=0;
        for(j=1;j<n;j++)
        {
            if(n==1)
            {
                l=0;
                k=0;
                break;
            }
            else if(a[j]>a[j+1]) l++;
            else if(a[j]<a[j+1]) k++;
        }
        printf("Case %d: %d %d\n",i,k,l);
    }
    return 0;
}
