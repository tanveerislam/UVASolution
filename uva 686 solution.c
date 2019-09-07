#include<stdio.h>
#include<math.h>
# define max 34000
char a[max];
int main()
{
    int m,n,i,j,k,l,c;
    for(i=2;i<max;i++) a[i]=1;
    k=2;
    for(i=2;i<=sqrt(max);i++)
    {
        for(j=k+k;j<max;j=j+k) a[j]=0;
        k++;
        for(;!a[k];k++);
    }
    while(scanf("%d",&n)==1&&n)
    {
        c=0;
        for(i=1;i<=n/2;i++)
        {
            if(a[i]&&a[n-i]) c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
