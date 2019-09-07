#include<stdio.h>
#include<math.h>
# define max 10000000
int a[max];
void slieve()
{
    int i,j,k,l;
    for(i=2;i<max;i++) a[i]=1;
    k=2;
    for(i=2;i<=sqrt(max);i++)
    {
        for(j=k+k;j<max;j=j+k) a[j]=0;
        k++;
        for(;!a[k];k++);
    }
}
int main()
{
    long long m,n,i,j,k,l,f,c,a1[100000];
    char ch;
    slieve();
    scanf("%lld\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a1[i]);
        scanf("%c",&ch);
    }
    for(i=0;i<n;i++)
    {
        j=a1[i];
        f=0;
        m=pow(2,j)-1;
        l=pow(2,(j-1));
        if(a[j])
        {
            if(m<max)
            {
                if(a[m]) f=1;
            }
            else
            {
                c=0;
                for(k=2;k<=sqrt(m);k++)
                {
                    if(m%k==0)
                    {
                        c=1;
                        break;
                    }
                }
                if(!c) f=1;
            }
            if(f) printf("Yes\n");
            else printf("No\n");
        }
        else printf("No\n");
    }
    return 0;
}
