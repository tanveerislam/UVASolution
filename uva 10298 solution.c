#include<stdio.h>
#include<string.h>
char a[1000005];
int main()
{
    int i,j,l;
    while(gets(a))
    {
        if(strcmp(a,".")==0) break;
        else
        {
            j=1;
            l=strlen(a);
            for(i=1;i<l;i++)
            while(a[i]!=a[i%j]) j++;
            if(l%j==0) printf("%d\n",l/j);
            else printf("1\n");
        }
    }
    return 0;
}
