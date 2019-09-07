#include<bits/stdc++.h>
#include<algorithm>
#include <stdio.h>
using namespace std;
char ch[1000];
int a[1000];

int main()
{
    int t,m,n,i,j,k,l,c,s,f;
    gets(ch);
    n=0;
    i=0;
    while(ch[i]) n=10*n+(ch[i++]-'0');
    for(t=1; t<=n; t++)
    {
        fflush(stdin);
        gets(ch);
        l=strlen(ch);
        k=0;
        i=0;
        while(i<l)
        {
             c=0;
            if(ch[i]>='0'&&ch[i]<='9')
            {
                s=0;
                for(j=i;ch[j]>='0'&&ch[j]<='9'; j++)
                {
                    s=10*s+(ch[j]-'0');
                    c++;
                }
                a[k]=s;
                k++;
                i+=c;
            }
            else if(ch[i]==' ') i++;
        }
        f=1;
        for(i=0; i<k; i++)
        {
            for(j=i+1; j<k; j++)
            {
                f=max(f,__gcd(a[i],a[j]));
            }
        }
        printf("%d\n",f);
    }
    return 0;
}
