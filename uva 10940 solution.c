#include<stdio.h>
int main()
{
    int m,n,i,j,k,l;
    while(scanf("%d",&n)==1&&n)
    {
        m=1;
        while(m<=n) m*=2;
        printf("%d\n",n-(m%n));
    }
    return 0;
}
