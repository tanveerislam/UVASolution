#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
char a[100];
int a1[100];
int main()
{
    long long m,n,i,j,k,l,s;
    while(gets(a))
    {
        if(a[0]=='-') break;
        if(strcmp(a,"0")==0)
        {
            printf("0\n");
            continue;
        }
        if(a[0]=='0'&&a[1]=='x')
        {
            l=strlen(a);
            j=0;
            s=0;
            for(i=l-1;i>=2;i--)
            {
                if(a[i]=='A') s+=(10*pow(16,j));
                else if(a[i]=='B') s+=(11*pow(16,j));
                else if(a[i]=='C') s+=(12*pow(16,j));
                else if(a[i]=='D') s+=(13*pow(16,j));
                else if(a[i]=='E') s+=(14*pow(16,j));
                else if(a[i]=='F') s+=(15*pow(16,j));
                else s+=(a[i]-'0')*pow(16,j);
                j++;
            }
            printf("%lld\n",s);
        }
        else
        {
            k=atol(a);
            l=0;
            while(k!=0)
            {
                a1[l]=k%16;
                l++;
                k/=16;
            }
            printf("0x");
            for(i=l-1;i>=0;i--)
            {
                if(a1[i]==10) printf("A");
                else if(a1[i]==11) printf("B");
                else if(a1[i]==12) printf("C");
                else if(a1[i]==13) printf("D");
                else if(a1[i]==14) printf("E");
                else if(a1[i]==15) printf("F");
                else printf("%d",a1[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
