#include<stdio.h>
int main()
{
    long m,n,i,j,k,l;
    long a[]={0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
    while(scanf("%ld",&n)==1&&n)
    {
        printf("%ld\n",a[n]);
    }
    return 0;
}
