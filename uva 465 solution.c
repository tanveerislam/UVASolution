#include<stdio.h>
#include<stdlib.h>
int main()
{
    long double a,b,u,v;
    char x[1000],y[1000],c;
    while(scanf("%s %c %s",&x,&c,&y)==3)
    {
        a=atof(x);
        b=atof(y);
        printf("%s %c %s\n",x,c,y);
        if(a>2147483647) printf("first number too big\n");
        if(b>2147483647) printf("second number too big\n");
        u=a+b;
        v=a*b;
        if(c=='+')
        {
            if(u>2147483647) printf("result too big\n");
        }
        else
        {
            if(v>2147483647) printf("result too big\n");
        }
    }
    return 0;
}
