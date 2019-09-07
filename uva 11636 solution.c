#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=1,i,j,ans;
    while(scanf("%d",&n)==1&&n>0)
    {
        for(i=0;i<n;i++)
        {
            j=pow(2,i);
            if(j>=n)
            {
                ans=i;
                break;
            }
        }
        printf("Case %d: %d\n",a,ans);
        a++;
    }
    return 0;
}
