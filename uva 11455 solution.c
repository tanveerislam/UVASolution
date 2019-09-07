#include<stdio.h>
int main()
{
   unsigned long long int n,i,a,b,c,d;
    scanf("%llu",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%llu %llu %llu %llu",&a,&b,&c,&d);
        if(a==b&&a==c&&a==d) printf("square\n");
        else if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c)) printf("rectangle\n");
        else if(((a+b+c)<=d)||((b+c+d)<=a)||((c+d+a)<=b)||((d+a+b)<=c)) printf("banana\n");
        else printf("quadrangle\n");
    }
    return 0;
}
