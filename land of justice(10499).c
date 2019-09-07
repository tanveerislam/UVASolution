#include<stdio.h>
int main()
{
    long long int N,i;
    while(scanf("%lld",&N)&&N>0)
    {
        i=25*N;
        if(N==1) printf("0%%\n");
        else printf("%lld%%\n",i);
    }
    return 0;
}
