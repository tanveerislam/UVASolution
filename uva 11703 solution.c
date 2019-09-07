#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
# define max 1000000
int a[max+2000];
int main()
{
    int m,n,i,j,k,l,x;
    a[0]=1;
    for(i=1;i<=max;i++)
    {
        a[i]=a[(int) floor (i-sqrt(i))]+a[(int) floor (log(i))]+a[(int) floor (i*sin(i)*sin(i))];
        a[i]%=max;
    }
    while(scanf("%d",&n)==1&&n>=0)
    {
        printf("%d\n",a[n]);
    }
    return 0;
}
