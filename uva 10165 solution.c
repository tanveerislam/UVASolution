#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
   long long n,i,j,k,l;
    while(scanf("%lld",&n)==1&&n)
    {
        j=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&k);
            j^=k;
        }
        if(!j) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
