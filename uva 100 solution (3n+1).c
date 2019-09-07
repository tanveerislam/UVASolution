#include<stdio.h>
int main()
{
    int m,n,x,y,i,j,k,l,t,c,max;
    int a[100000];
    while(scanf("%d %d",&m,&n)==2)
    {
        if(m==0 && n==0)break;
        if(m>n)
        {
            x=n;
            y=m;
        }
        else if(n>m)
        {
            x=m;
            y=n;
        }
        else if(m==n)
        {
            x=m;
            c=1;
            while(x>1)
            {
                c++;
                if(x%2==0) x=x/2;
                else x=3*x+1;
            }
            printf("%d %d %d\n",m,n,c);
            continue;
        }
        j=0;
        for(i=x; i<=y; i++)
        {
            t=i;
            c=1;
            while(t>1)
            {
                c++;
                if(t%2==0) t=t/2;
                else t=3*t+1;
            }
            a[j]=c;
            j++;
        }
        l=y-x;
        max=0;
        for(k=0; k<=l; k++)
        {
            if(a[k]>max) max=a[k];
        }
        printf("%d %d %d\n",m,n,max);
    }
    return 0;
}
