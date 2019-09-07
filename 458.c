#include<stdio.h>
#include<string.h>
int main()
{
    char c[10000];
    int i,j,k,l;
    while(gets(c))
    {
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            j=c[i]-7;
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
