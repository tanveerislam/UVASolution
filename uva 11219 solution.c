#include<stdio.h>
int main()
{
    int n,i,j,k,l,d1,d2,m1,m2,y1,y2;
    char c;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %c %d %c %d",&d1,&c,&m1,&c,&y1);
        scanf("%d %c %d %c %d",&d2,&c,&m2,&c,&y2);
        j=y1-y2;
        if(m2>m1) j--;
        else if(m1==m2)
        {
            if(d2>d1) j--;
        }
        k=j;
        if(k<0) printf("Case #%d: Invalid birth date\n",i);
        else if(k>130) printf("Case #%d: Check birth date\n",i);
        else printf("Case #%d: %d\n",i,k);
    }
    return 0;
}
