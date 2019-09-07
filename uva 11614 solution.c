#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        double s;
        scanf("%lf",&s);
        j=(int) ((-1+sqrt(1+8*s))/2);
        printf("%d\n",j);
    }
    return 0;
}
