#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,k,s,A;
    int i;
    for(i=1;i<=1000; i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        s=(a+b+c)/2;
        k=1.333333333333;
        A=k*sqrt(s*(s-a)*(s-b)*(s-c));
        if(A>0) printf("%.3lf\n",A);
        else
        {
            A=-1;
            printf("%.3lf\n",A);
        }
    }
    return 0;
}

