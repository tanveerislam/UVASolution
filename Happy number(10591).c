#include <stdio.h>
int main ()
{
    long long int n,a[100000],i,j,s,w,m,l;
    scanf("%lld",&m);
    for(l=1; l<=m; l++)
    {
        scanf("%lld",&n);
        {
            printf("Case #%lld: %lld ",l,n);
            for(w=1; w<=50; w++)
            {
                i=0;
                j=0;
                s=0;
                while(n!=0)
                {
                    a[i]=n%10;
                    n=n/10;
                    i++;
                    j++;
                }
                for(i=0; i<j; i++) s=s+a[i]*a[i];
                if(s==1)
                {
                    printf("is a Happy number.\n");
                    break;
                }
                else
                {
                    n=s;
                    continue;
                }
            }
            if(s!=1) printf("is an Unhappy number.\n");
        }
    }

    return 0;
}

