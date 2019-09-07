#include<stdio.h>
# define max 35000
long a[max];
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
        if(a[n]==1) printf("There is only %ld way to produce %ld cents change.\n",a[n],n);
        else printf("There are %ld ways to produce %ld cents change.\n",a[n],n);
    }
    return 0;
}
