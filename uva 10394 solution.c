#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

# define max 19000000
long long int p[max];
long long int p1[max];
char a[max];
int main()
{

    long long n,i,j,k,l,m;
    for(i=2; i<max; i++) a[i]=1;
    k=2;
    for(i=2; i<=sqrt(max); i++)
    {
        for(j=k+k; j<max; j=j+k) a[j]=0;
        k++;
        for(; !a[k]; k++);
    }
    m=0;
    for(i=2; i<max; i++)
    {
        if(a[i]&&a[i+2])
        {
            p[m]=i;
            p1[m]=i+2;
            m++;
        }
    }
    while(scanf("%lld",&n)==1)
    {
        if(!n) printf("(0, 2)\n");
        else
            printf("(%lld, %lld)\n",p[n-1],p1[n-1]);
    }
    return 0;
}
