#include<stdio.h>
#include<string.h>
# define N 590
char a[N],b[N],c[N],e[N];
int d[N];
int main()
{
    char x;
    int m,n,i,j,k,l,l1,l2,r,s,t;
    gets(a);
    l1=strlen(a);
    for(i=0;i<(N-l1);i++) b[i]='0';
    l=0;
    for(i=(N-l1);i<N;i++)
    {
        x=a[l];
        b[i]=x;
        l++;
    }
    for(i=0;i<N;i++) d[i]=b[i]-'0';
    while(gets(c))
    {
        if(strcmp(c,"0")==0)
        {
            for(i=0;i<N;i++) c[i]='0';
            r=0;
            for(i=N-1;i>=0;i--)
            {
                d[i]=(d[i])+(c[i]-'0')+r;
                m=d[i];
                if(m>9)
                {
                    d[i]=m%10;
                    r=m/10;
                }
                else
                {
                    d[i]=m%10;
                    r=m/10;
                }
            }
            for(i=0;i<N;i++) if(d[i]!=0) break;
            for(j=i;j<N;j++) printf("%d",d[j]);
            printf("\n");
            break;
        }
       else
       {
           l2=strlen(c);
           for(i=0;i<(N-l2);i++) e[i]='0';
           l=0;
           for(i=(N-l2);i<N;i++)
           {
               x=c[l];
               e[i]=x;
               l++;
           }
           r=0;
           for(i=N-1;i>=0;i--)
           {
               d[i]=(d[i])+(e[i]-'0')+r;
               t=d[i];
               if(t>9)
               {
                   d[i]=t%10;
                   r=t/10;
               }
               else
               {
                   d[i]=t%10;
                   r=t/10;
               }
           }
       }
    }
    return 0;
}
