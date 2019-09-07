#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    int a[1000];
    while(scanf("%d",&n)==1)
    {
        k=0;
        for(i=1;i<=n;i++) scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(a[i]>a[j]) k++;
            }
        }
        printf("Minimum exchange operations : %d\n",k);
    }
    return 0;
}
