#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[10000],a1[1000];
    long long b,m,n,i,j,k,l,l1,f;
    long long a3[10000];
    while(scanf("%lld %s %s",&b,&a,&a1)==3&&b!=0)
    {
        fflush(stdin);
        l=strlen(a);
        l1=strlen(a1);
        m=0;
        k=l1-1;
        for(i=0;i<l1;i++)
        {
            m+=(a1[i]-'0')*pow(b,k);
            k--;
        }
        f=0;
        for(i=0;i<l;i++)
        {
            f=((f*b)+(a[i]-'0'))%m;
        }
        if(!f) printf("0\n");
        else
        {
            j=0;
            while(f!=0)
            {
                a3[j]=f%b;
                f/=b;
                j++;
            }
            for(i=j-1;i>=0;i--) printf("%lld",a3[i]);
            printf("\n");
        }
    }
    return 0;
}
