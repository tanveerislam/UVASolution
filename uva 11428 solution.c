#include<stdio.h>
int main()
{
    long int i,j,n,k,l,f;
    while(scanf("%ld",&n)==1&&n)
    {
        f=0;
        for(i=1;i<60;i++)
        {
            k=i*i*i;
            for(j=1;j<=i;j++)
            {
                l=j*j*j;
                if(n==(k-l))
                {
                    f=1;
                    printf("%ld %ld\n",i,j);
                }
                if(f==1) break;
            }
            if(f==1) break;
        }
        if(f==0) printf("No solution\n");
    }
    return 0;
}
