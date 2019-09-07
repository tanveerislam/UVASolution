#include<stdio.h>
#include<string.h>
char a[100];
int main()
{
    int i,j,l,t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        getchar();
        gets(a);
        j=1;
        l=strlen(a);
        for(i=1; i<l; i++)
            while(a[i]!=a[i%j]) j++;
        if(l%j==0) printf("%d\n",j);
        else printf("%d\n",l);
        if(t)
        printf("\n");
    }
    return 0;
}
