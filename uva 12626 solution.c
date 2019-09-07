#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,j,l,c1,c2,c3,c4,c5,c6;
    int n,q;
    scanf("%d",&n);
    for(q=1; q<=n; q++)
    {
        scanf("%s",&a);
        j=39999;
        l=strlen(a);
        c1=0;
        c2=0;
        c3=0;
        c4=0;
        c5=0;
        c6=0;
        for(i=0; i<l; i++)
        {
            if(a[i]=='M') c1++;
            else if(a[i]=='A') c2++;
            else if(a[i]=='R') c3++;
            else if(a[i]=='G') c4++;
            else if(a[i]=='I') c5++;
            else if(a[i]=='T') c6++;
        }
        c2=c2/3;
        c3=c3/2;
        int aa[]= {c1,c2,c3,c4,c5,c6};
        for(i=0; i<6; i++)
        {
            if(aa[i]<j) j=aa[i];
        }
        printf("%d\n",j);
    }

    return 0;
}
