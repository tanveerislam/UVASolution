#include<stdio.h>
#include<string.h>
char a[1000000];
int a1[200];
int main()
{
    long n,m,i,j,k,l,max,c;
    while(gets(a))
    {
        l=strlen(a);
        max=0;
        for(i=65;i<=122;i++)
        {
            c=0;
            for(j=0;j<l;j++)
            {
                if(a[j]==i) c++;
            }
            if(c==0) continue;
            else a1[i]=c;
            if(c>max)
            max=c;
        }
        for(i=0;i<200;i++)
        {
            if(a1[i]==max) printf("%c",i);
        }
        printf(" %ld\n",max);
        for(i=0;i<200;i++) a1[i]=0;
    }
    return 0;
}

