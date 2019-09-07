#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


# define max 30000

int main()
{
    char a[max];
    long n,i,j,k,l,m;
    for(i=2;i<max;i++) a[i]=1;
    k=2;
    for(i=2;i<=sqrt(max);i++)
    {
        for(j=k+k;j<max;j=k+j) a[j]=0;
        k++;
        for(; !a[k];k++);
    }
    scanf("%ld",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%ld",&n);
        for(j=0;j<max;j++)
        {
            if(a[j])
            {
                if(2*j>n)
                {
                    printf("%ld\n",j);
                    break;
                }
            }
        }
    }
    return 0;
}
