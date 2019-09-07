#include<bits/stdc++.h>
#include<algorithm>

#define max 1000004

using namespace std;

int mu[max];
int M[max];

void factor()
{
    int i,j,k,l,c,count,f;
    mu[1]=M[1]=1;
    mu[2]=-1;
    M[2]=0;
    mu[3]=-1;
    M[3]=-1;
    for(i=4; i<max; i++)
    {
        j=i;
        c=0;
        f=0;
        for(k=2; k*k<=j; k++)
        {
            count=0;
            if(j%k==0)
            {
                while(j%k==0)
                {
                    c++;
                    count++;
                    j/=k;
                }
            }
            if(count>1)
            {
                mu[i]=0;
                M[i]=mu[i]+M[i-1];
                f=1;
                break;
            }
        }
        if(j!=1) c++;
        if(j==i&&!f)
        {
            mu[i]=-1;
            M[i]=mu[i]+M[i-1];
        }
        else
        {
            if(!f&&c%2==0)
            {
                mu[i]=1;
                M[i]=mu[i]+M[i-1];
            }
            else if(!f&&c%2==1)
            {
                mu[i]=-1;
                M[i]=mu[i]+M[i-1];
            }
        }
    }
}
int main()
{
    int m,n,i,j,k,l;
    factor();
    while(scanf("%d",&n)==1&&n)
    {
        printf("%8d%8d%8d\n",n,mu[n],M[n]);
    }
    return 0;
}
