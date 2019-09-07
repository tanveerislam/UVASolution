#include<bits/stdc++.h>

#define max 1100000
using namespace std;
char a[1000000];
int a1[max];
int function(int m,int n)
{
    int i,j,k;
    k=0;
    for(i=m; i<n; i++) k=10*k+(a[i]-'0');
    return k;
}

void sieve()
{
    int i,j,k,l;
    for(i=2; i<max; i++) a1[i]=1;
    k=2;
    for(i=2; i*i<max; i++)
    {
        for(j=k+k; j<max; j=j+k) a1[j]=0;
        k++;
        for(; !a1[k]; k++);
    }
}
int main()
{
    sieve();
    int m,n,i,j,k,l,s;
    while(scanf("%s",a)==1&&strcmp(a,"0")!=0)
    {
        l=strlen(a);
        s=-1;
        for(i=7; --i;)
        {
            for(j=0; j+i<=l; j++)
            {
                k=function(j,i+j);
                if(k<=100000&&a1[k])
                {
                    if(k>s) s=k;
                }
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
