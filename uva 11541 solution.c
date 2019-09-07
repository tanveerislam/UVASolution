#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,k,l;
    int num,c1,c2;
    char a[220];
    while(scanf("%d\n",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            gets(a);
            l=strlen(a);
            c1=0;
            c2=0;
            num=0;
            printf("Case %d: ",i);
            for(j=1; j<l; j++)
            {
                if(a[j]>='A'&&a[j]<='Z')
                {
                    if(num==0) continue;
                    else
                    {
                        c2++;
                        for(k=1; k<=num; k++) printf("%c",a[j-(c1+1)]);
                        c1=0;
                        num=0;
                    }
                }
                else
                {
                    c1++;
                    num=num*10+(a[j]-48);
                }
            }
            int t;
            for(t=1; t<=num; t++) printf("%c",a[j-(c1+1)]);
            printf("\n");
        }
    }

    return 0;
}
