#include<stdio.h>
int main()
{
    int m,n,x,y,i,j,k,l,c,max,s,t,d;
    int a[10000];
    int b[10000];
    while(scanf("%d %d",&m,&n)==2&&m&&n)
    {
        if(m>n)
        {
            x=n;
            y=m;
        }

         if(m==1&&n==1)
        {
            printf("Between 1 and 1, 1 generates the longest sequence of 3 values.\n");
            continue;
        }
        else if(m==n&&m!=1&&n!=1)
        {
            t=m;
            c=0;
            while(t!=1)
            {
                c++;
                if(t%2==0) t=t/2;
                else t=3*t+1;
            }
            printf("Between %d and %d, %d generates the longest sequence of %d values.\n",m,n,m,c);
            continue;
        }
        else if(x==1||y>1)
        {
            t=0;
            l=0;
            for(i=x;i<=y;i++)
            {
                j=i;
               // if(j==1)
             //   {
                    c=3;
                    continue;
               // }
                c=0;

                while(j>1)
                {
                    c++;
                    if(j%2==0) j=j/2;
                    else j=3*j+1;
                }
                a[t]=c;
                t++;
                b[l]=i;
                l++;
            }
            d=y-x;
            max=0;
            for(i=0;i<=d;i++)
            {
                if(a[i]>max)
                {
                    max=a[i];
                    s=b[i];
                }
            }

           printf("Between %d and %d, %d generates the longest sequence of %d values.\n",x,y,s,max);
            continue;
        }
    }
    return 0;
}
