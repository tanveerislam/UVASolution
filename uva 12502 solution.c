#include<stdio.h>
int main()
{
    int x,y,z,a,b,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        a=2*x-y;
        b=x+y;
        z=(z*a)/b;
        printf("%d\n",z);
    }
    return 0;
}
