#include<stdio.h>
#include<math.h>
# define max 1100000
char a[max];
int  a1[max];
int main()
{
    long m,n,i,j,k,l,c,s,r,x,y;
    for(i=2;i<max;i++) a[i]=1;
    k=2;
    for(i=2;i<=sqrt(max);i++)
    {
        for(j=k+k;j<max;j=j+k) a[j]=0;
        k++;
        for(;!a[k];k++);
    }
    c=0;
    for(i=0;i<max;i++)
    {
        if(a[i])
        {
            j=i;
            s=0;
            while(j>=10)
            {
                s+=(j%10);
                j/=10;
            }
            s+=j;
            if(a[s]) c++;
        }
        a1[i]=c;
    }
    scanf("%ld",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%ld %ld",&x,&y);
        printf("%ld\n",a1[y]-a1[x-1]);
    }
    return 0;
}
