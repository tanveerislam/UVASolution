#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,j,l;
    while(gets(a))
    {
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]>='A'&&a[i]<='C') printf("2");
            else if(a[i]>='D'&&a[i]<='F') printf("3");
            else if(a[i]>='G'&&a[i]<='I') printf("4");
            else if(a[i]>='J'&&a[i]<='L') printf("5");
            else if(a[i]>='M'&&a[i]<='O') printf("6");
            else if(a[i]>='P'&&a[i]<='S') printf("7");
            else if(a[i]>='T'&&a[i]<='V') printf("8");
            else if(a[i]>='W'&&a[i]<='Z') printf("9");
            else printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
