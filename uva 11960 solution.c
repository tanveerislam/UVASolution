#include<stdio.h>
# define max 1000008

int a[max];
int dp[max];
int main()
{
    int n,i,j,k,l;
    for(i=1;i<max;i++) a[i]=1;

    for(i=2;i<max;i++)
    {
        a[i]++;
        for(j=i+i;j<max;j=j+i) a[j]++;
    }
    dp[1]=1;
    for(i=2;i<max;i++)
    {
        l=dp[i-1];
        if(a[i]>=a[l]) dp[i]=i;
        else dp[i]=dp[i-1];
    }
    int tc;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
    return 0;
}
