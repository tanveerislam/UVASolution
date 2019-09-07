#include<stdio.h>
#include<math.h>
# define max 1001
char a[max];
char a1[max];
int main()
{
    long m,n,i,j,k,l,t1[10],c,s,f;
    int t[10];
    for(i=2;i<max;i++)
    {
        a[i]=1;
    }
    k=2;
    for(i=2;i<=sqrt(max);i++)
    {
        for(j=k+k;j<max;j=j+k) a[j]=0;
        k++;
        for(;!a[k];k++);
    }
    for(i=1;i<max;i++)
    {
        j=i;
        c=0;
        while(j!=0)
        {
            t[c]=j%10;
            c++;
            j/=10;
        }
        if(c==1)
        {
            t1[0]=t[0];
            s=1;
        }
        else if(c==2)
        {
            t1[0]=10*t[0]+t[1];
            t1[1]=10*t[1]+t[0];
            s=2;
        }
        else if(c==3)
        {
            t1[0]=100*t[0]+10*t[1]+t[2];
            t1[1]=100*t[0]+10*t[2]+t[1];
            t1[2]=100*t[1]+10*t[0]+t[2];
            t1[3]=100*t[1]+10*t[2]+t[0];
            t1[4]=100*t[2]+10*t[1]+t[0];
            t1[5]=100*t[2]+10*t[0]+t[1];
            s=6;
        }
        c=0;
        for(k=0;k<s;k++)
        {
            if(!a[t1[k]])
            {
                c=1;
                break;
            }
        }
        if(!c) a1[i]=1;
    }
    while(scanf("%ld",&n)==1&&n)
    {
        if(n>=1000)
        {
            printf("0\n");
            continue;
        }
        if(n<10) m=10;
        else if(n>=10&&n<100) m=100;
        else if(n>=100&&n<1000) m=1000;
        f=0;
        for(i=n+1;i<m;i++)
        {
            if(a1[i])
            {
                printf("%ld\n",i);
                f=1;
                break;
            }
        }
        if(!f) printf("0\n");
    }
    return 0;
}
