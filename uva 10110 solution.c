#include<stdio.h>
#include<math.h>
int main()
{
    long int r;
    long double root,num;
    while(scanf("%Lf",&num)==1)
    {
        if(num==0) break;
        r=sqrt(num);
        root=pow(r,2);
        if(root==num)printf("%Lf\n",num);
        else printf("no\n");
    }
    return 0;
}
