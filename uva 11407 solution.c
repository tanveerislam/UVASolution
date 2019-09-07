#include<stdio.h>
#include<math.h>
# define max 10010
int a[max];

int main()
{
    int m,n,i,j,k,l,min=max,f;
    a[1]=1;
    a[2]=2;
    a[3]=3;
    a[4]=1;
    for(i=5;i<max;i++)
    {
        f=max;
        for(j=sqrt(i);j>0;j--)
        {
            if(f>a[i-j*j]+1) f=a[i-j*j]+1;
        }
        a[i]=f;
    }
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        printf("%d\n",a[m]);
    }
    return 0;
}
