#include<stdio.h>
int main()
{
    int m,n,x;
    while(scanf("%d %d",&m,&n)==2)
    {
        x=(m-1)+(m*(n-1));
        printf("%d\n",x);
    }
    return 0;
}
