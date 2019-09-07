#include<stdio.h>
#include<math.h>
# define max 1000010
long a[max];
int product(long input)
{
    long m,n,i,j,k,l,c;
    c=0;
    for(i=2;i*i<=input;i++)
    {
        if(input%i==0)
        {
            while(input%i==0&&input/i>0)
            {
                input/=i;
            c++;
            }
        }
    }
    if(input!=1) c++;
    return c;
}
int main()
{
    long m,n,i,j,k,l;
    a[2]=1;
    for(i=3;i<max;i++) a[i]=product(i)+a[i-1];
    while(EOF!=scanf("%ld",&n)==1)
    {
        printf("%ld\n",a[n]);
    }
    return 0;
}
