#include<stdio.h>
long int a[700][700];
int main()
{
    long n,m,i,j,k,l,c1,c2,r,s;
    while(scanf("%ld",&n)==1&&n)
    {
        for(i=0;i<n;i++)
        for(j=0;j<n;j++) scanf("%ld",&a[i][j]);
        c1=0;
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=0;j<n;j++) s+=a[i][j];
            if(s%2)
            {
                c1++;
                k=i+1;
            }
        }
       c2=0;
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=0;j<n;j++) s+=a[j][i];
            if(s%2)
            {
                c2++;
                l=i+1;
            }
        }
        if(c1==0&&c2==0) printf("OK\n");
        else if(c1==1&&c2==1) printf("Change bit (%ld,%ld)\n",k,l);
        else printf("Corrupt\n");
    }
    return 0;
}
