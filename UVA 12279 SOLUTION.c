#include<stdio.h>
int main()
{
    int m,n,i,j,l;
    i=1;
    while(scanf("%d",&n)==1&&n)
    {
        j=0;
        for(l=0; l<n; l++)
        {
            scanf("%d",&m);
            if(m>0) j++;
            else j--;
        }
        printf("Case %d: %d\n",i,j);
        i++;
    }
    return 0;
}
