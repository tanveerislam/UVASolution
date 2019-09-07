#include<stdio.h>
#include<math.h>
int main()
{
     long int n,i,j,k,l,m,c,c1;
    while(scanf("%ld",&n)==1)
    {
        c=0;
        j=sqrt(n);
        for(i=1;i<=j;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c>1) printf("%ld is not prime.\n",n);
        else if(c==1)
        {
            k=n;
            l=0;
            while(k!=0)
            {
                l=l*10+(k%10);
                k=k/10;
            }
            m=sqrt(l);
            c1=0;
            for(i=1;i<=m;i++)
            {
                if(l%i==0)
                {
                    c1++;
                }
            }
            if(c1==1&&l!=n) printf("%ld is emirp.\n",n);
            else  printf("%ld is prime.\n",n);
        }
    }
    return 0;
}
