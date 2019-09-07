#include<stdio.h>
int main()
{
    unsigned long int j,k,l,a,b,c,d,x,y;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lu %lu",&a,&b);
        d=0;
        printf("case #%d\n",i+1);
        for(j=a;j<=b;j++)
        {
            k=j;
            l=k*k;
            x=0;
            y=0;
            c=10;
            for(;;)
            {
                if(c>l) break;
                x=l%c;
                y=l/c;
                c=c*10;
                if(x!=0&&y!=0&&k==(x+y))
                {
                    d++;
                    printf("%lu\n",k);
                    break;
                }
            }
        }
        if(d==0) printf("no kaprekar numbers\n");
         if(i!=n-1) printf("\n");
    }
    return 0;
}
