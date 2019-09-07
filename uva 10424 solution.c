#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,k,l1,l2,s1,s2;
    double a,b,c;
    char a1[50],a2[50];
    while(gets(a1))
    {
        s1=0;
        s2=0;
        gets(a2);
        l1=strlen(a1);
        l2=strlen(a2);
        for(i=0;i<l1;i++)
        {
            if(a1[i]>='a'&&a1[i]<='z') s1=s1+(a1[i]-96);
            else if(a1[i]>='A'&&a1[i]<='Z') s1=s1+(a1[i]-64);
        }
         for(i=0;i<l2;i++)
        {
            if(a2[i]>='a'&&a2[i]<='z') s2=s2+(a2[i]-96);
            else if(a2[i]>='A'&&a2[i]<='Z') s2=s2+(a2[i]-64);
        }
        while(s1>9)
        {
            j=s1;
            k=0;
            while(j!=0)
            {
                k=k+(j%10);
                j=j/10;
            }
            s1=k;
        }
        while(s2>9)
        {
            j=s2;
            k=0;
            while(j!=0)
            {
                k=k+(j%10);
                j=j/10;
            }
            s2=k;
        }
       a=(double)s1/(double)s2;
       b=(double)s2/(double)s1;
       if(a<=1) printf("%.2lf %%\n",a*100);
       else printf("%.2lf %%\n",b*100);
    }
    return 0;
}
