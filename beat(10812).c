#include<stdio.h>
int main()
{
    int n,i,a,b,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        x=(a+b)/2;
        y=(a-b)/2;
        if(a>=b&&((a-b)%2==0||(a+b)%2==0))  printf("%d %d\n",x,y);
        else printf("impossible\n");
    }
    return 0;
}

