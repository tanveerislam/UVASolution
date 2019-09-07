#include<stdio.h>
int main()
{
    int n,i,s;
    while(scanf("%d",&n)==1&&n)
    {
        i=n;
        s=0;
        while(i>=3)
        {
            s=s+i/3;
            i=(i/3)+(i%3);
        }
        if(i==2) printf("%d\n",s+1);
        else printf("%d\n",s);
    }
    return 0;
}
