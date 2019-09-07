#include<stdio.h>
int main()
{
    int n,i,j,s,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=0;
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(j%2!=0) s=s+j;
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
