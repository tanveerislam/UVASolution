#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,c,j,k,m;
    int a1[3010],a2[3010];
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
         scanf("%d",&a1[i]);
        for(i=0;i<n;i++)
        {
           a2[i]=abs(a1[i]-a1[i+1]);

        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a2[j]>a2[j+1])
                {
                    k=a2[j];
                    a2[j]=a2[j+1];
                    a2[j+1]=k;
                }
            }
        }
        c=0;
        for(i=0;i<n;i++)
        {
            m=i+1;
            if(a2[i]!=m)
            c++;
        }
        if(c==0) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
