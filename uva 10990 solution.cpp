#include<bits/stdc++.h>
#define max 2000008
using namespace std;

long a[max];
long a1[max];
long a2[max];

void phi()
{
    long i,j,k,l;
    a[1]=0;
    for(i=2;i<max;i++)
    {
        if(a[i]==0)
        {
            a[i]=i-1;
            for(j=i+i;j<max;j+=i)
            {
                if(a[j]==0) a[j]=j;
                a[j]=(a[j]/i)*(i-1);
            }
        }
    }
}
int main()
{
    long m,n,i,j,k,l,c;
    phi();
    for(i=2;i<max;i++)
    {
        c=0;
        j=i;
        while(a[j]>1)
        {
            j=a[j];
            c++;
        }
        a1[i]=c+1;
        a2[i]=a1[i]+a2[i-1];
    }

    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld %ld",&m,&n);
        printf("%ld\n",a2[n]-a2[m-1]);
    }
    return 0;
}
