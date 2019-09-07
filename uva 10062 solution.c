#include<stdio.h>
#include<string.h>
int a1[1010];

int main()
{
    char a[1010];
    int i,j,k,l,m,n,max;
    k=1;
    for(i=0;i<1010;i++) a[i]='\0';
    while(gets(a))
    {
        l=strlen(a);
        max=0;
        for(i=128;i>=32;i--)
        {
            for(j=0;j<l;j++)
            {
                if(a[j]==i) a1[i]++;
            }
            if(a1[i]>max)
            {
                m=a1[i];
                max=m;
            }
        }
        if(k==1) k++;
        else printf("\n");
        for(i=1;i<=max;i++)
        {
            for(j=128;j>=32;j--)
            if(a1[j]==i)
            printf("%d %d\n",j,i);
        }
        for(i=0;i<1010;i++)
        {
            a[i]='\0';
            a1[i]=0;
        }
    }
    return 0;
}
