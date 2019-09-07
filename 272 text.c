#include<stdio.h>
#include<string.h>
int main()
{
    char c[10000];
    int l,a=0,i;
    while(gets(c))
    {
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            if(c[i]=='"')
            {
                a=a+1;
                if(a%2!=0) printf("``");
                else if(a%2==0) printf("''");
            }
            else printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}
