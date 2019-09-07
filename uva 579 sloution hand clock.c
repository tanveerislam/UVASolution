


#include<stdio.h>
#include<math.h>
int main()
{
    int h,m;
    double d,i,j,k;
    char a;
    while(scanf("%d %c %d",&h,&a,&m)==3)
    {
        if(h==0&&m==0) break;
        i=h*30+.5*m;
       j=m*6;
       d=fabs(i-j);
       k=d;
        if(k==360) printf("0.000\n");
        else if(k>180) printf("%.3lf\n",360-k);
        else if (k<180)printf("%.3lf\n",k);
        else if(k==180) printf("180.000\n");
    }
     return 0;
}
