#include<stdio.h>
int main()
{
    int n,q,i,j,t=1,temp,c;
    int a[10010],b[10010];
    while(scanf("%d %d",&n,&q)==2&&n&&q)
    {
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(i=0;i<q;i++) scanf("%d",&b[i]);
        printf("CASE# %d:\n",t);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        for(i=0;i<q;i++)
        {
            c=0;
            for(j=0;j<n;j++)
            {
                if(a[j]==b[i])
                {
                    printf("%d found at %d\n",b[i],(j+1));
                    c=1;
                    break;
                }
            }
             if(c==0) printf("%d not found\n",b[i]);
        }
        t++;
    }
    return 0;
}
