#include <stdio.h>

int main()
{
    long long int I,J,K, num1_ini, num2_ini, num1, num2;
    long long int seq[10000];
    while(scanf("%lld %lld", &num1_ini, &num2_ini)==2)
    {
        K=0;
        num1=num1_ini;
        num2=num2_ini;
        if(num1<num2 || num1<2 || num2<2) printf("Boring!\n");
        else
            for(I=1; ; I++)
            {
                if(num1==1)
                {
                    seq[K]=1;
                    for(J=0; J<K; J++)
                        printf("%lld ",seq[J]);
                    printf("%lld\n", seq[K]);
                    break;
                }
                else if(num1%num2==0)
                {
                    seq[K]=num1;
                    K++;
                    num1=num1/num2;
                }
                else
                {
                    printf("Boring!\n");
                    break;
                }
            }
    }
    return 0;
}
