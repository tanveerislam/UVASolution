#include<stdio.h>
int main()
{
    int n,f,i,j,k,l;
    long int s,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&f);
        s=0;
        for(j=1;j<=f;j++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            s=s+(a*c);
        }
        printf("%ld\n",s);
    }
    return 0;
}
