#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,aa,b,c,d;
    char a[1000];
    while(gets(a))
    {
        l=strlen(a);
        j=0;
        k=0;
        if(a[0]>='0'&&a[0]<='9') j=1;
        else k=1;
        if(k==1)
        {
            for(i=l-1;i>=0;i--)
            {
                aa=a[i];
                while(aa>=10)
                {
                    b=aa%10;
                    aa=aa/10;
                    printf("%d",b);
                }
                printf("%d",aa);
            }
            printf("\n");
        }
        else if(j==1)
        {
            c=0;
            for(i=l-1;i>=0;i--)
            {
                if(!(c>=65&&c<=90)&&!(c>=97&&c<=122)&&c!=32&&c!=33&&c!=44&&c!=46&&c!=58&&c!=59&&c!=63)
                {
                    d=a[i]-48;
                    c=c*10+d;
                }
                else
                {
                    printf("%c",c);
                    c=a[i]-48;
                }
            }
            printf("%c",c);
            printf("\n");
        }
    }
    return 0;
}
