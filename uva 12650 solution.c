#include<stdio.h>
int main()
{
    long int n,r,i,j,k,l,temp,c;
    long int a[10100];
    while(scanf("%ld %ld",&n,&r)==2)
    {
        for(i=0;i<r;i++) scanf("%ld",&a[i]);
        if(n-r==0)
        {
            printf("*\n");
            continue;
        }
        for(i=0;i<r;i++)
        {
            for(j=i+1;j<r;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            c=0;
            for(j=0;j<r;j++)
            {
                if(a[j]==i)
                {
                    c++;
                    break;
                }
            }
            if(c==0) printf("%ld ",i);
        }
        printf("\n");
    }
    return 0;
}
