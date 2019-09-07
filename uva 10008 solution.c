#include<stdio.h>
#include<string.h>
char a[100000];
int a1[200];
int main()
{
    int m,n,i,j,k,l,c,max;;
    scanf("%d\n",&n);
    for(c=1; c<=n; c++)
    {
        gets(a);
        l=strlen(a);
        for(i=65; i<=90; i++)
        {
            for(j=0; j<l; j++) if(a[j]==i) a1[i]++;
        }
        for(i=97; i<=122; i++)
        {
            for(j=0; j<l; j++) if(a[j]==i) a1[i-32]++;
        }
    }
    max=0;
    for(i=0; i<200; i++)
    {
     if(a1[i]>max) max=a1[i];
    }
    for(i=max;i>=1;i--)
    {
        for(j=0;j<200;j++)
        {
            if(a1[j]==i) printf("%c %d\n",j,i);
        }
    }
    return 0;
}
