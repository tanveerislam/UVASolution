#include<stdio.h>
int main()
{
    int n,i,j,k,l,x,y,c1,c2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c1=0;
        c2=0;
        scanf("%d",&l);
        x=l;
        while(x!=0)
        {
            j=x%2;
            if(j==1) c1++;
            x=x/2;
        }
        y=l;
        while(y!=0)
        {
            k=y%10;
            if(k==1||k==2||k==4||k==8) c2++;
            else if(k==3||k==5||k==6||k==9) c2=c2+2;
            else if(k==7) c2=c2+3;
            y=y/10;
        }
        printf("%d %d\n",c1,c2);
    }
    return 0;
}
