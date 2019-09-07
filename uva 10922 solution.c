#include<stdio.h>
#include<string.h>



int main()
{
    long n,i,j,k,l,m,s,c;
    char a[10000];
    while(gets(a))
    {
        if(!(strcmp(a,"0"))) break;
        l=strlen(a);
        s=0;
        for(i=0;i<l;i++) s+=(a[i]-'0');
        if(s%9!=0) printf("%s is not a multiple of 9.\n",a);



        else
        {
            if(s<=9)
            printf("%s is a multiple of 9 and has 9-degree 1.\n",a);


            else
            {
                c=1;
                i=s;
                while(i>9)
                {
                    c++;
                    j=0;
                    while(s!=0)
                    {
                        j+=(s%10);
                        s/=10;
                    }
                    i=j;
                }
                printf("%s is a multiple of 9 and has 9-degree %ld.\n",a,c);
            }
        }
    }
    return 0;
}
