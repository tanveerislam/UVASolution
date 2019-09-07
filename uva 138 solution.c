#include<stdio.h>
#include<math.h>
int main()
{
    long long n,x=8,c=0,i,j,k,l;
    double f;
    while(1)
    {
        f=sqrt((x*x+x)/2);
        n=f;
        if(n==f)
        {
            printf("%10lld%10lld\n",n,x);
            c++;
        }
        if(c==10) break;
        x++;
    }
    return 0;
}
