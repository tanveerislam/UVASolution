#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=1;
    while(scanf("%d",&n)==1&&n)
    {
        printf("Case %d: %d\n",i,n/2);
        i++;
    }
    return 0;
}
