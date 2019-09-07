#include<stdio.h>
# define max 50
long long a[max],a1[max],a2[max],a3[max],a4[max],a5[max],a6[max],a7[max];
int main()
{
    long long  m,n,i,j,k,l,c,s,r,t,f,x,y;
    scanf("%lld",&x);
    for(y=1; y<=x; y++)
    {
        scanf("%lld",&n);
        if(n<=45000)
        {
            i=(n*n*n*n)-6*(n*n*n)+23*(n*n)-18*n+24;
            printf("%lld\n",i/24);
        }
        else
        {
            m=n;
            t=0;
            while(m!=0)
            {
                a[t]=m%10;
                m/=10;
                t++;
            }
            for(i=t; i<max; i++) a[i]=0;
            r=0;
            for(i=0; i<max; i++)
            {
                l=18*a[i]+r;
                if(l>9)
                {
                    a1[i]=l%10;
                    r=l/10;
                }
                else
                {
                    a1[i]=l%10;
                    r=l/10;
                }
            }
            for(i=1; i<4; i++)
            {
                r=0;
                for(j=0; j<max; j++)
                {
                    l=a[j]*n+r;
                    if(l>9)
                    {
                        a[j]=l%10;
                        r=l/10;
                    }
                    else
                    {
                        a[j]=l%10;
                        r=l/10;
                    }
                }
                if(i==1)
                {
                    for(j=0; j<max; j++) a2[j]=a[j];
                    r=0;
                    for(j=0; j<max; j++)
                    {
                        l=a2[j]*23+r;
                        if(l>9)
                        {
                            a2[j]=l%10;
                            r=l/10;
                        }
                        else
                        {
                            a2[j]=l%10;
                            r=l/10;
                        }
                    }
                }
                else if(i==2)
                {
                    for(j=0; j<max; j++) a3[j]=a[j];
                    r=0;
                    for(j=0; j<max; j++)
                    {
                        l=6*a3[j]+r;
                        if(l>9)
                        {
                            a3[j]=l%10;
                            r=l/10;
                        }
                        else
                        {
                            a3[j]=l%10;
                            r=l/10;
                        }
                    }
                }
            }
            r=0;
            for(i=0; i<max; i++)
            {
                if(i==0) l=a[i]+a2[i]+4+r;
                else if(i==1) l=a[i]+a2[i]+2+r;
                else l=a[i]+a2[i]+r;
                if(l>9)
                {
                    a4[i]=l%10;
                    r=l/10;
                }
                else
                {
                    a4[i]=l%10;
                    r=l/10;
                }
            }
            r=0;
            for(i=0; i<max; i++)
            {
                l=a1[i]+a3[i]+r;
                if(l>9)
                {
                    a5[i]=l%10;
                    r=l/10;
                }
                else
                {
                    a5[i]=l%10;
                    r=l/10;
                }
            }
            for(i=0; i<max; i++)
            {
                if(a4[i]<a5[i])
                {
                    a4[i]=10+a4[i];
                    a6[i]=a4[i]-a5[i];
                    a5[i+1]=a5[i+1]+1;
                }
                else
                {
                    a6[i]=a4[i]-a5[i];
                }
            }
            for(i=max-1; i>=0; i--) if(a6[i]!=0) break;
            l=0;
            for(j=i; j>=0; j--)
            {
                t=a6[j];
                a7[l]=t;
                l++;
            }
            c=0;
            s=0;
            for(i=0; i<l; i++)
            {
                c=c*10+a7[i];
                if(c/24)
                {
                    s=1;
                    printf("%lld",c/24);
                }
                if(s) if(!(c/24)) printf("0");
                c%=24;
            }
            if(!s) printf("0");
            printf("\n");
        }
        for(i=0; i<max; i++) a[i]=a1[i]=a2[i]=a3[i]=a4[i]=a5[i]=a6[i]=a7[i]=0;
    }
    return 0;
}
