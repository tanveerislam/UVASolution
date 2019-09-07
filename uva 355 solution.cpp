#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long m,n,i,j,k,l,s,f,flag;
    char a[200];
    long long a1[200];
    while(scanf("%lld %lld %s",&m,&n,&a)==3)
    {
        fflush(stdin);
        flag=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]!='0') flag=1;
            break;
        }
        if(!flag)
        {
            printf("%s base %lld = 0 base %lld\n",a,m,n);
            continue;
        }
        f=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]>='0'&&a[i]<='9')
            {
                if(a[i]-48>=m)
                {
                    f=1;
                    break;
                }
            }
            if(a[i]>='A'&&a[i]<='Z')
            {
                if(a[i]-55>=m)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
        {
            printf("%s is an illegal base %lld number\n",a,m);
            continue;
        }
        l=strlen(a)-1;
        s=0;
        for(i=0;i<strlen(a);i++)
        {
            j=a[i]-'0';
            k=a[i]-55;
            if(a[i]>='0'&&a[i]<='9') s=s+j*pow(m,l);
            else if(a[i]>='A'&&a[i]<='Z') s=s+k*pow(m,l);
            l--;
        }
        if(n==10)
        {
            printf("%s base %lld = %lld base 10\n",a,m,s);
            continue;
        }
        i=0;
        while(s!=0)
        {
            a1[i]=s%n;
            s/=n;
            i++;
        }
        printf("%s base %lld = ",a,m);
        for(j=i-1;j>=0;j--)
        {
            if(a1[j]>9) printf("%c",a1[j]+55);
            else printf("%lld",a1[j]);
        }
        printf(" base %lld\n",n);
    }
    return 0;
}
//A4C base 15 = 1821 base 11
