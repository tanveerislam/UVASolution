#include<stdio.h>
int main()
{
    unsigned long int x,y,z;
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%ld %ld %ld",&x,&y,&z);
        if(x>=(y+z)||y>=(z+x)||z>=(x+y)) printf("Case %d: Invalid\n",i);
        else if(x==y&&y==z&&z==x) printf("Case %d: Equilateral\n",i);
        else if((x==y&&z<x+y)||(y==z&&x<y+z)||(z==x&&y<z+x)) printf("Case %d: Isosceles\n",i);
        else if(x!=y&&y!=z&&z!=x) printf("Case %d: Scalene\n",i);
        else printf("Case %d: Invalid\n",i);
    }
    return 0;
}
