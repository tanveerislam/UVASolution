#include<stdio.h>
int main()
{
    int i,j,k,l,a[10],n;
    while(scanf("%d",&n)==1&&n)
    {
        for(l=1; l<=n; l++)
        {
            j=0;
            for(i=0; i<5; i++)
            {
                scanf("%d",&a[i]);
                if(a[i]<=127)
                {
                    j++;
                    k=i+1;
                }
            }
            if(j==1)
            {
                if(k==1) printf("A\n");
                else if(k==2) printf("B\n");
                else if(k==3) printf("C\n");
                else if(k==4) printf("D\n");
                else if(k==5) printf("E\n");
            }
            else printf("*\n");
        }
    }
    return 0;
}
