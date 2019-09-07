#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    //int i,j,l,n,k,m;
    int m,n;
    char a[11025];
    scanf("%d\n",&n);

    for(m=1; m<=n; m++)
    {
        int i,j,l,k;
        gets(a);
        l=strlen(a);
        j=sqrt(l);
        if((j*j)!=l) printf("INVALID\n");
        else
        {

                for(i=0; i<j; i++)
                {
                    for(k=i; k<=(j*(j-1))+i; k=k+j)
                    {
                        printf("%c",a[k]);
                    }
                }
            printf("\n");
        }
    }
    return 0;
}
