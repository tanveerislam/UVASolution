#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i,j,k,l,b,c,c1,f;
    char a[2050],x;
    scanf("%d\n",&n);
    for(i=1; i<=n; i++)
    {
        gets(a);
        l=strlen(a);
        printf("Case %d: ",i);
        c=0;
        for(j='0'; j<='z'; j++)
        {
            c1=0;
            for(k=0; k<l; k++)
            {
                if(j==a[k]) c1++;
            }
            if(c1==0||c1==1) continue;
            else
            {
                f=0;
                for(b=1; b<=sqrt(c1); b++) if(c1%b==0) f++;
                if(f==1)
                {
                    printf("%c",j);
                    c=1;
                }
            }
        }
        if(c==1) printf("\n");
        if(c==0) printf("empty\n");
    }
    return 0;
}
