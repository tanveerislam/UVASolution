#include<stdio.h>
int main()
{
    int m,n,i,j,k,l,c;
    int a[15];
    while(scanf("%d %d",&m,&n)==2)
    {
        for(k=0;k<10;k++) a[k]=0;
        c=0;
        for(i=m;i<=n;i++)
        {
            j=i;
            while(j)
            {
                l=j%10;
                a[l]++;
                j=j/10;
            }
            for(k=0;k<10;k++)
            {
                if(a[k]>1)
                {
                    c++;
                    break;
                }
            }
            for(k=0;k<10;k++) a[k]=0;
        }
         printf("%d\n",((n-m)+1)-c);
    }
    return 0;
}
