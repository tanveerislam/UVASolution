#include<stdio.h>
#include<conio.h>

#define MAX 99999
int main()
{
    unsigned long long int m,n,i,j,k,l;
   unsigned  long long int a[MAX];
    while(scanf("%llu %llu",&n,&m)==2)
    {
        if(n<m||n<2||m<2) printf("Boring!\n");
        else
        {
            a[0]=n;
            k=1;
            l=1;
            while(n>1)
            {
                if(n%m==0)
                {
                    a[l]=n/m;
                    n=n/m;
                    if(a[l-1]<=a[l])
                    {
                        k=0;
                        break;
                    }
                    l++;
                }
                else if(n%m!=0)
                {
                    k=0;
                    break;
                }
            }
            if(k==0) printf("Boring!\n");
            else
            {
                printf("%llu",a[0]);
                for(i=1; i<l; i++)
                {
                    printf(" %llu",a[i]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
