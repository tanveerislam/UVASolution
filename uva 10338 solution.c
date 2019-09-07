#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long int i,j,k,q,s,x,y;
    int n,t,l,m,c;
    char a[55];
    scanf("%d\n",&n);
    for(t=1;t<=n;t++)
    {
        gets(a);
        l=strlen(a);
        c=1;
        if(l==0)
        {
            printf("Data set %d: 0\n");
            continue;
        }
        for(m=0;m<l;m++)
        if(!(a[m]>='A'&&a[m]<='Z'))
        {
            c=0;
            break;
        }
        if(c==0) printf("Data set %d: 0\n",t);
        else
        {
            i=1;
            for(j=1;j<=l;j++) i=i*j;
            s=1;
            for(j=65;j<=90;j++)
            {
                q=0;
                for(k=0;k<l;k++)
                {
                    if(a[k]==j) q++;
                }
                if(q==0) continue;
                x=1;
                for(y=1;y<=q;y++) x=x*y;
                s=s*x;
            }
            i=i/s;
            printf("Data set %d: %lld\n",t,i);
        }
    }
    return 0;
}
