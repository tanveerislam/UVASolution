#include<stdio.h>
int main()
{
     int n,i,s,j=1;

    while(scanf("%d",&n)==1)
    {
        if(j) printf("PERFECTION OUTPUT\n");
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        s=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0) s=s+i;
        }
        if(s==n)
         printf("%5d  PERFECT\n",n);
        else if(s<n)
         printf("%5d  DEFICIENT\n",n);
        else
         printf("%5d  ABUNDANT\n",n);
        j=0;
    }
    return 0;
}
