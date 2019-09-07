#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a+b<=c)||(b+c<=a)||(c+a<=b)) printf("Wrong!!\n");
        else printf("OK\n");
    }
    return 0;
}
