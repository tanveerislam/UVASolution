#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,l,n;
    while(scanf("%d\n",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            gets(a);
            l=strlen(a);
            if(a[l-2]=='3'&&a[l-1]=='5') printf("-\n");
            else if(a[0]=='9'&&a[l-1]=='4') printf("*\n");
            else if(a[0]=='1'&&a[1]=='9'&&a[2]=='0') printf("?\n");
            else printf("+\n");
        }
    }




    return 0;
}
