#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    //int i,j,k,l,b;
    while(gets(a))
    {
        int i,j,k,l,b;
        b=0;
        l=strlen (a);
        for(i=0;i<l;i++)
        {
            if(a[i]==' ')
            {
                for(j=i-1;j>=b;j--) printf("%c",a[j]);
                b=i+1;
                printf(" ");
            }
        }
        for(j=l-1;j>=b;j--) printf("%c",a[j]);
        printf("\n");
    }
    return 0;
}
