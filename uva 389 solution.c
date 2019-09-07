#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long m,n,i,j,k,l,s,f,f1,T,M,Q,X,a1[10000];
    char a[10000];
    while(scanf("%s %lld %lld",&a,&m,&n)==3)
    {
        fflush(stdin);
        l=strlen(a);
        f1=0;
        for(i=0;i<l;i++)
        {
            if(a[i]!='0')
            {
                f1=1;
                break;
            }
        }
        if(f1==0)
        {
            printf("%7lld\n",f1);
            continue;
        }
        s=0;
        k=l-1;
        for(i=0; i<l; i++)
        {
            X=pow(m,k);
            if(a[i]>='0'&&a[i]<='9')
            {
                M=a[i]-'0';
                s=s+(M*X);
            }
            else
            {
                Q=a[i]-55;
                s=s+(Q*X);
            }
            k--;
        }
        j=0;
        while(s!=0)
        {
            T=a1[j]=s%n;
            s/=n;
            j++;
        }
        if(j>7) printf("  ERROR\n");
        else
        {
            for(i=0;i<7-j;i++) printf(" ");
            for(i=j-1; i>=0; i--)
            {
                if(a1[i]<=9) printf("%lld",a1[i]);
                else if(a1[i]>9) printf("%c",a1[i]+55);
            }
            printf("\n");
        }
    }
    return 0;
}
