//{561,1105,1729,2465,2821,6601,8911,10585,15841,29341,41041,46657,52633,62745,63973};
#include<stdio.h>
int main()
{
    int a[15]= {561,1105,1729,2465,2821,6601,8911,10585,15841,29341,41041,46657,52633,62745,63973};
    int n;
    while(scanf("%d",&n)==1&&n)
    {
        if(n==a[0]||n==a[1]||n==a[2]||n==a[3]||n==a[4]||n==a[5]||n==a[6]||n==a[7]||n==a[8]||n==a[9]||n==a[10]||
                n==a[11]||n==a[12]||n==a[13]||n==a[14])
            printf("The number %d is a Carmichael number.\n",n);
        else printf("%d is normal.\n",n);
    }
    return 0;
}

