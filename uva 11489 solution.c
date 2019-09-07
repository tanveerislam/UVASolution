#include<stdio.h>
#include<string.h>
char a[10000];
int a1[10];
int main()
{
    int m,n,i,j,k,l,t,s,f;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        gets(a);
        l=strlen(a);
        s=0;
        for(j=0;j<l;j++)
        {
            m=a[j]-'0';
            s+=m;
            a1[m]++;
        }
        t=a1[3]+a1[6]+a1[9];
        f=1;
        if(s%3==0)
        {
            if(t%2==0) f=0;
        }
        else if(s%3==1)
        {
            if(a1[1]||a1[4]||a1[7])
            {
                if(t%2!=0) f=0;
            }
            else f=0;
        }
        else
        {
            if(a1[2]||a1[5]||a1[7])
            {
                if(t%2!=0) f=0;
            }
            else f=0;
        }
        if(f) printf("Case %d: S\n",i);
        else printf("Case %d: T\n",i);
        for(j=0;j<10;j++) a1[j]=0;
    }
    return 0;
}
