#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,i,j,a;
    char s[200];
    long long int ss=0;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",&s);
        if(strcmp(s,"donate")==0)
        {
            scanf("%lld",&a);
            ss=ss+a;
        }
        else
        {
            printf("%lld\n",ss);
        }

    }
    return 0;
}
