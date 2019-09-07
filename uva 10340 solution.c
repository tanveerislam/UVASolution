#include<stdio.h>
#include<string.h>
int main()
{
    char x[1000005],y[1000005];
    int i,j,l1,l2;
    while(scanf("%s %s",&x,&y)==2)
    {
        l1=strlen(x);
        l2=strlen(y);
        i=0;
        for(j=0;i<l1&&j<l2;j++)
        {
            if(x[i]==y[j]) i++;
        }
        if(i==l1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
