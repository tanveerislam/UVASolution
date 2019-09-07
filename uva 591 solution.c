#include<stdio.h>
int main()
{
    int a[150];
    int n,i,j,k,l,s,b,t;
    t=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        s=0;
        for(i=0;i<n;i++)
        {
             scanf("%d",&a[i]);
             s=s+a[i];
        }
        j=s/n;
        k=0;
        for(b=0;b<n;b++)
        {
            if(j<a[b])
            {
                l=a[b]-j;
                k+=l;
            }
        }
        printf("Set #%d\n",t);
        printf("The minimum number of moves is %d.\n\n",k);
        t++;
    }
    return 0;
}
