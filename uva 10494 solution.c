#include<stdio.h>
#include<string.h>
char a[200000];
int main()
{
    long long m,n,i,j,k,l,r,f;
    char c;
    while(scanf("%s %c %lld",&a,&c,&n)==3)
    {
        l=strlen(a);
        r=0;
        f=0;
        if(c=='%')
        {
            for(i=0; i<l; i++)
            {
                r=(a[i]-'0')+10*r;
                r=r%n;
            }
            printf("%lld\n",r);
        }
        else
        {
            for(i=0; i<l; i++)
            {
                r=(a[i]-'0')+10*r;
                if(r/n) f=1;
                if(f) printf("%lld",r/n);
                r%=n;
            }
            if(!f) printf("0");
            printf("\n");
        }
    }
    return 0;
}
