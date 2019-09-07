#include<stdio.h>
int main()
{
    int n,m,i,j,max,min,a[500];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        max=0;
        min=100;
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]>max) max=a[j];
            if(a[j]<min) min=a[j];
        }
        printf("%d\n",2*(max-min));
    }
    return 0;
}
