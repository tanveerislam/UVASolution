#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=1,k,l;
    double a,b,s,t,r,c,mal=400;
    char x;
    while(scanf("%d %c %d",&k,&x,&l)==3)
    {
        a=k;
        b=l;
        s=0.0;
        t=400.0;
        for(i=0;i<100;i++)
        {
            r=(s+t)/2;
            c=r*(sqrt(a*a+b*b)*acos((a*a-b*b)/(a*a+b*b))+2*a);
            if(c>mal) t=r;
            else s=r;
        }
        printf("Case %d: %.10lf %.10lf\n",j,r*a,r*b);
        j++;
    }
    return 0;
}
