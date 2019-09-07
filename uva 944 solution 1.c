#include<stdio.h>
int main()
{
     long long int a,b,x,y,t,i,j,k,l,s,c,m=0,temp;
    while(scanf("%lld %lld",&a,&b)==2)
    {
       if(m!=0) printf("\n");
       m=1;
       x=a;
       y=b;
       if(x>y)
       {
           temp=x;
           x=y;
           y=temp;
       }
        for(i=x;i<=y;i++)
        {
            if(i==1)
            {
                printf("1 1\n");
                continue;
            }
            j=i;
            c=1;
            for(k=1;k<10;k++)
            {
                s=0;
                c++;
                l=j;
                while(l!=0)
                {
                    s=s+(l%10)*(l%10);
                    l=l/10;
                }
                if(s==1)
                {
                    printf("%lld %lld\n",i,c);
                        break;
                }
                else
                {
                    j=s;
                    continue;
                }
            }
        }
    }
    return 0;
}
