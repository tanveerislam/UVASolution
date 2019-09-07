#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    char ch[20];
    int m,n,i,j,k,l;
    scanf("%d\n",&n);

    for(i=1;i<=n;i++)
    {
        gets(ch);
        l=strlen(ch);
        sort(ch,ch+l);
        do
        {
            printf("%s\n",ch);
        }
        while(next_permutation(ch,ch+l));
        printf("\n");
    }
    return 0;
}
