#include<stdio.h>
int main()
{
    int a,b,i,j;
    while(scanf("%d %d",&a,&b)==2&&a!=-1&&b!=-1)
    {
        j=0;
        if(a<b)
        {
            for(i=a;i<b;i++) j++;
            if(j<=50) printf("%d\n",j);
            else if(j>50) printf("%d\n",100-j);
        }
        else if(a>b)
        {
            for(i=a;i>b;i--) j++;
            if(j<=50) printf("%d\n",j);
            else if(j>50) printf("%d\n",100-j);
        }
        else if(a==b) printf("%d\n",a-b);
    }
    return 0;
}
