#include<stdio.h>
#include<string.h>
char a1[400],a2[400],s1[400],s2[400];
int a3[400];
int main()
{
    char x,y;
    int m,n,i,j,k,l1,l2,r,t,g,h,c;
    scanf("%d",&m);
    fflush(stdin);
    for(i=1;i<=m;i++)
    {
       scanf("%s %s",&a1,&a2);
       l1=strlen(a1) ;
       l2=strlen(a2);
       for(j=l1;j<400;j++) a1[j]='0';
       for(j=l2;j<400;j++) a2[j]='0';
       t=399;
       for(j=0;j<400;j++)
       {
           x=a1[j];
           y=a2[j];
           s1[t]=x;
           s2[t]=y;
           t--;
       }
       r=0;
       for(j=399;j>=0;j--)
       {
           k=(s1[j]-'0')+(s2[j]-'0')+r;
           if(k>9)
           {
                a3[j]=(k%10);
                r=k/10;
           }
           else
           {
               a3[j]=(k%10);
               r=k/10;
           }
       }
       for(j=0;;j++)
       {
           if(a3[j]!=0)
           {
               h=j;
               break;
           }
       }
       for(j=399;;j--)
       {
           if(a3[j]!=0)
           {
               break;
           }
       }
       for(g=j;g>=h;g--)
       {
           printf("%d",a3[g]);
       }
       printf("\n");
    }
    return 0;
}
