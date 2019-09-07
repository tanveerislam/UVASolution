#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main()
{
    long long a[100],m;
    int n,i,j,k,l;
    int c,c1;
    a[0]=0;
    a[1]=1;
    for(i=2;i<60;i++) a[i]=a[i-1]+a[i-2];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        c1=0;
        scanf("%lld",&m);
        printf("%lld = ",m);
        for(j=45;j>1;j--)
        {
            if(m>=a[j])
            {
                printf("1");
                m=m-a[j];
                c=1;
            }
            else if(c==1)
            {
                printf("0");
            }
        }
        printf(" (fib)\n");
    }
    return 0;
}
