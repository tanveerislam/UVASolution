#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,i,j,flag;
    scanf("%lld",&n);
    while(n!=0)
    {
        flag = 1;
        for(i=0; pow(j,3)-pow(i,3)!=n&&(pow((j=i+1),3)-pow(i,3))<n;i++)
        {
            for(j=i+1; (pow(j,3)-pow(i,3))<n; j++);
        }
        if((pow(j,3)-pow(i,3))==n)
            printf("%lld %lld\n",j,i);
        else
            printf("No solution\n");
        scanf("%lld",&n);
    }
    return 0;
}
