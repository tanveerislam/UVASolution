#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int n,i,k,l,s;
    while(gets(a))
    {
        if(!strcmp(a,"0")) break;
        else
        {
            l=strlen(a);
            k=0;
            for(i=0;i<l;i++)
            {
                s=k*10+a[i]-'0';
                k=s%17;
            }
            if(!k) printf("1\n");
            else printf("0\n");
        }
    }
    return 0;
}
