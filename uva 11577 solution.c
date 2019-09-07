#include<stdio.h>
#include<string.h>
char a[100000];
int a1[200];
int main()
{
    int m,n,i,j,k,l,max;
    scanf("%d\n",&n);
    for(i=1; i<=n; i++)
    {
        gets(a);
        l=strlen(a);
        for(j=65; j<=122; j++)
        {
            for(k=0; k<l; k++)
            {
                if(a[k]>=65&&a[k]<=90)
                {
                    if(a[k]==j) a1[j+32]++;
                }
                else if(a[k]>='a'&&a[k]<='z')
                {
                    if(a[k]==j) a1[j]++;
                }
            }
        }
        max=0;
        for(j=0; j<200; j++)
        {
            if(a1[j]>max) max=a1[j];
        }
        for(j=0; j<200; j++)
        {
            if(a1[j]==max) printf("%c",j);
        }
        printf("\n");
        for(j=0; j<200; j++) a1[j]=0;
    }
    return 0;
}
