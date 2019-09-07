#include<stdio.h>
#include<math.h>
#include<string.h>
#define pi acos(-1)
#define r 6440
int main()
{
    double h,i,a,b,c;
    char s[4];
    while(scanf("%lf %lf %s",&h,&i,s)==3)
    {
        if(!strcmp(s,"deg"))
        {
           if(i>180) i=360-i;
            a=(i*pi)/180;
        }
        else if(!strcmp(s,"min"))
        {
            if(i>180) i=360-i;
            a=(i*pi)/10800;
        }
        b=(r+h)*a;
        c=2*(r+h)*sin(a/2);
        printf("%.6lf %.6lf\n",b,c);
    }
    return 0;
}
