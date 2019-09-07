#include<stdio.h>
int main()
{
    long long int n,i,j,s;
    while(scanf("%lld",&n)==1)
    {
        s=1;
        if(n<0&&n%2==0) printf("Underflow!\n");
        else if(n<0&&n%2!=0) printf("Overflow!\n");
        else if(n==0||n<=7) printf("Underflow!\n");
        else if(n==8||n<=13)
        {
            for(i=1;i<=n;i++) s=s*i;
            printf("%lld\n",s);
        }
        else printf("Overflow!\n");
    }
    return 0;
}
