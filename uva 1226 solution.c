#include<stdio.h>
#include<string.h>
char a[30000];
int main()
{
    long long n,i,j,k,l,t;
    int m;
    scanf("%d\n",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%lld",&n);
        scanf("%s",a);
        l=strlen(a);
        k=0;
        for(j=0;j<l;j++)
        {
            k=10*k+(a[j]-'0');
            k=k%n;
        }
        printf("%lld\n",k);
    }
    return 0;
}
