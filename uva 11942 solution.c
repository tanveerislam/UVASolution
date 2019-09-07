#include<stdio.h>
int main()
{
    int n,i,j,c,d;
    int a[20];
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    for(j=1;j<=n;j++)
    {
        c=0;
        d=0;
        for(i=0;i<10;i++) scanf("%d",&a[i]);
        for(i=0;i<9;i++)
        {
            if(a[i]>a[i+1]) c++;
            else if(a[i]<a[i+1]) d++;
        }
        if(c==9||d==9) printf("Ordered\n");
        else printf("Unordered\n");
    }
}

