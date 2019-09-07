#include<stdio.h>
int main()
{
    int t,m,n,p,q,c;
    int a[90],i,j,k,l;
    scanf("%d",&m);
    for(t=1;t<=m;t++)
    {

        scanf("%d %d %d",&n,&p,&q);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        j=0;
        c=0;
        for(i=0;i<n&&i<p;i++)
        {
            j=j+a[i];
            if(j<=q) c++;
        }
        printf("Case %d: %d\n",t,c);
    }
    return 0;
}
