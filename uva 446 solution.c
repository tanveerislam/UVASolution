#include<stdio.h>
#include<string.h>
#include<math.h>
long long a1[13],a2[13];
int main()
{
    long long m,n,t,i,j,j1,j2,k1,k2,l1,l2,s,s1,s2,mal;
    char h1[1000],h2[1000],ch;
    scanf("%lld",&t);
    fflush(stdin);
    for(n=1; n<=t; n++)
    {
        scanf("%s %c %s",&h1,&ch,&h2);
        fflush(stdin);
        l1=strlen(h1);
        l2=strlen(h2);
        s1=0;
        k1=l1-1;
        for(i=0; i<l1; i++)
        {
            m=pow(16,k1);
            if(h1[i]>='0'&&h1[i]<='9')
            {
                j1=h1[i]-'0';
                s1+=(j1*m);
            }
            else
            {
                j2=h1[i]-55;
                s1+=(j2*m);
            }
            k1--;
        }
        s2=0;
        k2=l2-1;
        for(i=0; i<l2; i++)
        {
            m=pow(16,k2);
            if(h2[i]>='0'&&h2[i]<='9')
            {
                j1=h2[i]-'0';
                s2+=(j1*m);
            }
            else
            {
                j2=h2[i]-55;
                s2+=(j2*m);
            }
            k2--;
        }
        if(ch=='+') s=s1+s2;
        else if(ch=='-') s=s1-s2;
        j=0;
        while(s1!=0)
        {
            a1[j]=s1%2;
            s1/=2;
            j++;
        }
        mal=0;
        while(s2!=0)
        {
            a2[mal]=s2%2;
            s2/=2;
            mal++;
        }
        for(i=12;i>=0;i--) printf("%lld",a1[i]);
        printf(" %c ",ch);
        for(i=12;i>=0;i--) printf("%lld",a2[i]);
        printf(" = %lld\n",s);
        for(i=0;i<13;i++) a1[i]=a2[i]=0;
    }
    return 0;
}
