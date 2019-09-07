#include<stdio.h>
int main()
{
    long long int n,i,j,k,l;
    int a[160];
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            printf("0\n");
            continue;
        }
        if(n<0) break;
        j=n;
        l=0;
        while(j!=0)
        {
            k=j%3;
            a[l]=k;
            j=j/3;
            l++;
        }
        for(i=l-1;i>=0;i--) printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
