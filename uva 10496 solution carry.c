#include<stdio.h>
int main()
{
    unsigned long long int a,b,c;
    while(scanf("%llu %llu",&a,&b)==2&&a&&b)
    {
        c=a^b;
        printf("%llu\n",c);
    }
    return 0;
}
