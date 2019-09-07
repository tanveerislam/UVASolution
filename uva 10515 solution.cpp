#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

long long pow_(long long m,long long n)
{
    long long i,j,k,l,temp;
    temp=m%10;
    for(i=1; i<n; i++)
    {
        temp=temp*m;
        temp%=10;
    }
    return temp;
}
int main()
{
    long long m,n,i,j,k,l1,l2;
    char s1[1000],s2[1000];
    while(scanf("%s %s",s1,s2)==2)
    {
        l1=strlen(s1);
        l2=strlen(s2);
        if(strcmp(s1,"0")==0&&strcmp(s2,"0")==0) break;
        else if(strcmp(s1,"0")==0) printf("0\n");
        else if(strcmp(s2,"0")==0) printf("1\n");
        else if(strcmp(s2,"1")==0) printf("%c\n",s1[l1-1]);
        else
        {
            m=s1[l1-1]-'0';
            if(l2>=2)
                n=10*(s2[l2-2]-'0')+s2[l2-1]-'0';
            else
                n=s2[l2-1]-'0';
            if(n==0)
            {
                j=pow_(m,99);
                j=(j*m)%10;
            }
            else
                j=pow_(m,n);
            printf("%lld\n",j);
        }
    }
    return 0;
}
