#include<stdio.h>
#include<string.h>
int main()
{
    char a1[300],a2[300];

    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int j,k,l1,l2;
        k=0;
        scanf("%s",&a1);
        scanf("%s",&a2);
        l1=strlen(a1);
        l2=strlen(a2);
        if(l1!=l2) printf("No\n");
        else
        {
            for(j=0;j<l1;j++)
            {
                if((a1[j]=='a'||a1[j]=='e'||a1[j]=='i'||a1[j]=='o'||a1[j]=='u')&&(a2[j]=='a'||a2[j]=='e'||
                                                                                  a2[j]=='i'||a2[j]=='o'||a2[j]||'u')) continue;

                else if(a1[j]==a2[j]) k++;
            }
            if(k==0) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
