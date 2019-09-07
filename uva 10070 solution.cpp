#include<stdio.h>
#include<string.h>

char a[100000];
int f(char a[],int l,int z)
{
    int i,j,k,c=0;
    for(i=0;i<l;i++)
    {
        c=(10*c)+(a[i]-'0');
        c%=z;
    }
    return c;
}
int main()
{
    int m=0,n,i,j,k,l;
    while(scanf("%s",a)==1)
    {
        i=0;
        j=0;
        k=0;
        if(m) printf("\n");
        m=1;
        l=strlen(a);
        if((f(a,l,4)==0&&f(a,l,100)!=0)||f(a,l,400)==0)
        {
            printf("This is leap year.\n");
            i=1;
        }
        if(f(a,l,15)==0)
        {
            printf("This is huluculu festival year.\n");
            j=1;
        }
        if(f(a,l,55)==0&&i==1)
        {
            printf("This is bulukulu festival year.\n");
            k=1;
        }
        if(!i&&!j&&!k) printf("This is an ordinary year.\n");
    }
    return 0;
}
