#include<stdio.h>
int main()
{
    int m,n,i,j,k,l;
    while(scanf("%d",&n)==1)
    {
        if(n==2)
            puts("00\n01\n81");
        else if(n==4)
            puts("0000\n0001\n2025\n3025\n9801");
        else if(n==6)
            puts("000000\n000001\n088209\n494209\n998001");
        else if(n==8)
            puts("00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001");
    }
    return 0;
}
