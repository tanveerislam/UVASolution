#include<stdio.h>
int main()
{
    int n,i=0,j,k,l;
     int sol[]={1,1,2,5,14,42,132,429,1430,4862,16796};
    while(scanf("%d",&n)==1)
    {
        if(i) printf("\n");
        printf("%d\n",sol[n]);
        i=1;
    }
    return 0;
}
