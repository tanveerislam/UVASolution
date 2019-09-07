#include<stdio.h>
#include<string.h>
char a1[100],a2[100],a3[100];
int main()
{
    int m,n,i,j,k,l,l1,l2;
    char x;
    scanf("%d\n",&n);
    for(i=1; i<=n; i++)
    {
        gets(a1);
        gets(a2);
        printf("Case %d: ",i);
        l1=strlen(a1);
        l2=strlen(a2);
        if(!(strcmp(a1,a2))) printf("Yes\n");
        else
        {
            k=0;
            for(j=0; j<l1; j++)
            {
                if((a1[j]>='A'&&a1[j]<='Z')||(a1[j]>='a'&&a1[j]<='z'))
                {
                    x=a1[j];
                    a3[k]=x;
                    k++;
                }
            }
            a3[k]='\0';
            l=0;
            for(j=0; j<l2; j++)
            {
                if(a2[j]!=a3[j])
                {
                    l++;
                    break;
                }
            }
            if(k==l2&&l==0) printf("Output Format Error\n");
            else printf("Wrong Answer\n");
        }
    }
    return 0;
}
