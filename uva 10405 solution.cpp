#include<bits/stdc++.h>
using namespace std;

int a[2000][2000];
char s1[2000],s2[2000];
int main()
{
    int i,j,k,l1,l2,n,m;
    while(scanf("%s",s1))
    {
        scanf("%s",s2);
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=1; i<=l1; i++)
        {
            for(j=1; j<=l2; j++)
            {
                if(s1[i-1]==s1[j-1]) a[i][j]=a[i-1][j-1]+1;
                else a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
        }
        printf("%d\n",a[i-1][j-1]);
    }
    return 0;
}
