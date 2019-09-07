#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i,n,l,c;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",&a);
        l=strlen(a);
        if(l==5) printf("3\n");
        else
        {
            c=0;
            if(a[0]=='o') c++;
            if(a[1]=='n') c++;
            if(a[2]=='e') c++;

            if(c>=2) printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}
