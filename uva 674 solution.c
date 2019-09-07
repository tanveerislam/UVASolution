#include<stdio.h>
# define max 7600
long  a[max];
int main()
{
    int a1[]={1,5,10,25,50};
    long m,n,i,j,k,l;
    a[0]=1;
    for(i=0;i<5;i++)
    {
        for(j=a1[i];j<max;j++)
        {
            a[j]=a[j]+a[j-a1[i]];
        }
    }
    while(scanf("%ld",&n)==1)
    {
        printf("%ld\n",a[n]);
    }
    return 0;
}
