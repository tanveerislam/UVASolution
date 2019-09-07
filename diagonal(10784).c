#include<stdio.h>
#include<math.h>
int main()
{
    long long int p,n;
    int i=1;
    while(scanf("%lld",&p)==1&&p)
    {


            n=ceil(((3+sqrt(9+8*p))/2));
            printf("Case %d: %lld\n",i,n);


       i++;
    }
return 0;
}
