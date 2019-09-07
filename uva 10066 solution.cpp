#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int a1[120],a2[120];

int s[120][120];

int main()
{
    int m,n,i,j,k,l,c=1;
    while(scanf("%d %d",&m,&n)==2&&m&&n)
    {
        for(i=1;i<=m;i++) scanf("%d",&a1[i]);
        for(i=1;i<=n;i++) scanf("%d",&a2[i]);
        printf("Twin Towers #%d\n",c++);
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a1[i]==a2[j]) s[i][j]=s[i-1][j-1]+1;
                else s[i][j]=max(s[i-1][j],s[i][j-1]);
            }
        }
        printf("Number of Tiles : %d\n\n",s[m][n]);
    }
    return 0;
}
