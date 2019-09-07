#include<stdio.h>
int main()
{
    int a,b,c,d,L;
    int i,n,cc;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&L)==5)
    {
        cc=0;
        if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(L==0)) break;
        else
        {
            for(i=0;i<=L;i++)
            {
                n=a*i*i+b*i+c;
                if(n%d==0) cc++;
            }
            printf("%d\n",cc);
        }
    }
    return 0;
}
