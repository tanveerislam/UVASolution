#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    int a[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&j);
        for(k=0;k<j;k++) scanf("%d",&a[k]);
        l=(j/2)+1;
        printf("Case %d: %d\n",i,a[l-1]);
    }
    return 0;
}
