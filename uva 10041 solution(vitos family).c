#include<stdio.h>
#include<math.h>
#include<stdlib.h>
long a[5000];


int main()
{
    long m,n,i,j,k,l,s,temp;
    scanf("%ld",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%ld",&n);
        for(j=1;j<=n;j++) scanf("%ld",&a[j]);


        for(j=1;j<=n;j++)
        {
            for(k=j+1;k<=n;k++)
            {
                if(a[j]>a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }


        if(n%2==1) l=(n/2)+1;
        else if(n%2==0) l=(n/2)+1;

        s=0;


        for(j=1;j<=n;j++)
        {
            s+=abs(a[j]-a[l]);
        }


        printf("%ld\n",s);
    }
    return 0;
}
