#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,l1,l2,c,c1,c2;
    int a[180];
    char s1[1010],s2[1010];
    while(gets(s1))
    {
        gets(s2);
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0;i<180;i++) a[i]=0;
        if(l1<l2)
        {
            for(i=0; i<l1; i++)
            {
                c=0;
                for(j=0; j<l2; j++)
                {
                    if(s1[i]==s2[j])
                    {
                        c=1;
                        a[s1[i]]++;
                        break;
                    }
                }
                if(c==1) continue;
            }
        }
        else if(l2<l1)
        {
            for(i=0; i<l2; i++)
            {
                c=0;
                for(j=0; j<l1; j++)
                {
                    if(s2[i]==s1[j])
                    {
                        c=1;
                        a[s2[i]]++;
                        break;
                    }
                }
                if(c==1) continue;
            }
        }
        else if(l1==l2)
        {
            for(i=0; i<l1; i++)
            {
                c=0;
                for(j=0; j<l2; j++)
                {
                    if(s1[i]==s2[j])
                    {
                        c=1;
                        a[s1[i]]++;
                        break;
                    }
                }
                if(c==1) continue;
            }
        }
        for(i=0;i<180;i++)
        {
            if(a[i]>0)
            {
               c1=0;
               c2=0;
               for(j=0;j<l1;j++) if(s1[j]==i) c1++;
               for(j=0;j<l2;j++) if(s2[j]==i) c2++;
               if(c1<c2) for(j=1;j<=c1;j++) printf("%c",i);
               else if(c2<c1) for(j=1;j<=c2;j++) printf("%c",i);
               else  for(j=1;j<=c2;j++) printf("%c",i);
            }
        }
        printf("\n");
    }
    return 0;
}
