#include<stdio.h>
#include<math.h>

int main ()
{
    long long int n,length,lastQuo,prevQuo,sum;
    int test,i;
    scanf ("%d", &test);
    while (test--)
    {
        scanf("%lld",&n);
        if ( n < 1 )
        {
            printf ("0\n");
            continue;
        }
        length = sqrt (n);
        prevQuo = n;
        sum = 0;
        for(i=1;i<=length;i++)
        {
            lastQuo=n/i;
            sum+=lastQuo+(prevQuo-lastQuo)*(i-1);
            prevQuo=lastQuo;
        }
        if(prevQuo>length) sum+=length;
        printf("%lld\n",sum);
    }
    return 0;
}
