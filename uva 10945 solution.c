#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k,l,p;
    char a[1000],b[1000],c[1000],x,y;
    while(gets(a))
    {
        l=strlen(a);
        if(!strcmp(a,"DONE")) break;
        for(i=0;i<l;i++) if(a[i]>='A'&&a[i]<='Z') a[i]=a[i]+32;
        //printf("%s",a);
        k=0;
        for(i=0;i<l;i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                x=a[i];
                b[k]=x;
                k++;
            }
        }
       // for(i=0;i<k;i++) printf("%c",b[i]);
        //printf("\n");
        l=k-1;
        j=0;
        for(i=l;i>=0;i--)
        {
            y=b[i];
            c[j]=y;
            j++;
        }
       // printf("%s",c);
       p=0;
       j=0;
       for(i=0;i<=l;i++)
       {
           if(b[i]!=c[j])
           {
               p=1;
               break;
           }
           j++;
       }
       if(p==0) printf("You won't be eaten!\n");
       else if(p==1) printf("Uh oh..\n");
    }
    return 0;
}
