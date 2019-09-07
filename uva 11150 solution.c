#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1)
    {
        i=n/2;
        j=n+i;
        printf("%d\n",j);
    }
    return 0;
}
