#include<stdio.h>
int main()
{
    int n,i,j,s;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        else
        {
            s=0;
            for(i=1; i<=n; i++)
            {
                j=i*i;
                s=s+j;
            }
            printf("%d\n",s);
        }
    }
    return 0;
}
