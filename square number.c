#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,j,k,c;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0&&b==0) break;
        else
        {
            c=0;
            for(j=a; j<=b; j++)
            {
                k=sqrt(j);
                if((int)k==sqrt(j)) c=c+1;
                else continue;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
