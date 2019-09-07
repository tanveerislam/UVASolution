#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<string.h>

char a[20],b[20],c[20];
int main()
{
    char x;
    long long m,n,i,j,k,l,temp,t;
    float f;
    while(gets(a))
    {
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            for(j=i+1; j<l; j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        k=l-1;
        for(i=0; i<l; i++)
        {
            x=a[i];
            b[k]=x;
            k--;
        }
        m=atoll(b);
        if(m==0)
        {
            printf("0 - 0 = 0 = 9 * 0\n");
            for(i=0;i<20;i++) a[i]=b[i]=c[i]='\0';
            continue;
        }
        if(a[0]!='0')
        {
            n=atoll(a);
            printf("%lld - %lld = %lld = 9 * %lld\n",m,n,m-n,(m-n)/9);
        }
        else
        {
            t=0;
            for(i=0; i<l; i++)
            {
                if(a[i]=='0') t++;
                else if(a[i]!='0')
                {
                    break;
                }
            }
            x=a[i];
            c[0]=x;
            for(j=1; j<=t; j++)
            {
                c[j]='0';
            }
            if(j==l) c[j]='\0';
            else
            {
                for(i=j; i<l; i++)
                {
                    x=a[i];
                    c[i]=x;
                }
                c[l]='\0';
            }
            n=atoll(c);
            printf("%lld - %lld = %lld = 9 * %lld\n",m,n,m-n,(m-n)/9);
        }
        for(i=0;i<20;i++) a[i]=b[i]=c[i]='\0';
    }
    return 0;
}
