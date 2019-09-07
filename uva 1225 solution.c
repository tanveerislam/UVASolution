#include<stdio.h>
int main()
{
    long int m,i,j,k,l;
    int n,a[15];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%ld",&m);
        for(j=0; j<15; j++) a[j]=0;
        for(j=1; j<=m; j++)
        {
            k=j;
            while(k!=0)
            {
                l=k%10;
                a[l]++;
                k=k/10;
            }
        }
        for(j=0;j<10;j++)
        {
            printf("%d",a[j]);
            if(j!=9) printf(" ");
            else if(j==9) printf("\n");
        }
    }
    return 0;
}
