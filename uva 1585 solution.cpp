#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

char a[1000];
int main()
{
    int i,j,k,l,s,f,c,t,m,n;
    scanf("%d",&t);
    fflush(stdin);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        l=strlen(a);
        f=0;
        c=1;
        s=0;
        for(j=0;j<l;j++)
        {
            if(a[j]=='O')
            {
                f=1;
                if(f)
                {
                    s=s+c;
                    c++;
                }
            }
            else if(a[j]=='X') c=1;
        }
        printf("%d\n",s);
    }
    return 0;
}
