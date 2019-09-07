#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,A;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        if(a==0||b==0||c==0)
        {
            printf("The radius of the round table is: 0.000\n");
        }
        else
        {
            s=(a+b+c)/2;
            A=sqrt(s*(s-a)*(s-b)*(s-c));
            printf("The radius of the round table is: %.3lf\n",A/s);
        }
    }
    return 0;
}
