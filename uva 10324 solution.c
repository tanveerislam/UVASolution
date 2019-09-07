#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000010];
    long long n,i,j,k,l,max,min,temp;
    k=1;
    while(scanf("%s",&a)==1)
    {
        scanf("%lld",&n);
        printf("Case %lld:\n",k);
        for(i=1;i<=n;i++)
        {
            scanf("%lld %lld",&min,&max);
            if(max==min)
            {
                printf("Yes\n");
                continue;
            }
             if(min>max)
            {
                temp=min;
                min=max;
                max=temp;
            }
            l=0;
            for(j=min;j<max;j++)
            {
                if(a[j]!=a[j+1])
                {
                    printf("No\n");
                    break;
                }
                else if(a[j]==a[j+1]) l++;
            }
            if(l==max-min) printf("Yes\n");
        }
        k++;
    }
    return 0;
}
