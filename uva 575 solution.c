#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[100];
    long long int m,n,i,j,k,l,s;
    while(gets(a))
    {
        if(strcmp(a,"0")==0) break;
        s=0;
        l=strlen(a);
        k=l;
        for(i=0;i<l;i++)
        {
            n=a[i]-48;
            m=n*(pow(2,k)-1);
            s=s+m;
            k--;
        }
        printf("%lld\n",s);
    }
    return 0;
}
