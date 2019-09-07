#include<stdio.h>
int main()
{
    int n,m,i,j,k,c;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++) scanf("%d",&a[j]);
        c=0;
        for(j=0;j<m;j++)
        {
            for(k=j+1;k<m;k++)
            {
                if(a[j]>a[k]) c++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
