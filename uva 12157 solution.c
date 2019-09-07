#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,m,s1,s2;
    int a[40];
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        s1=0;
        s2=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            s1=s1+((a[j]/30)+1);
            s2=s2+((a[j]/60)+1);
        }
        s1=s1*10;
        s2=s2*15;
        if(s1<s2) printf("Case %d: Mile %d\n",i,s1);
        else if(s2<s1) printf("Case %d: Juice %d\n",i,s2);
        else printf("Case %d: Mile Juice %d\n",i,s1);
    }
    return 0;
}
