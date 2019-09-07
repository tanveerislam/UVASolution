#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    while(scanf("%d",&n)==1)
    {
        if(n%6==0) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
