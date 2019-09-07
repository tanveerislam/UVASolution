#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long int n,i,j,k,l,s,aa,b;
    char a[30];
    while(gets(a))
    {
        s=0;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                j=a[i]-96;
                s=s+j;
            }
            else if(a[i]>='A'||a[i]<='Z')
            {
                k=a[i]-38;
                s=s+k;
            }
        }
        aa=sqrt(s);
        b=0;
        for(i=1;i<=aa;i++)
        {
            if(s%i==0) b++;
        }
        if(b==1) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
