#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    int a,x,y;
    int g;
    char s[100];
    while(scanf("%d",&g)==1&&g!=0)
    {
        //int i,j,l;
       // int a,x,y;
        scanf("%s",&s);
        l=strlen(s);
        a=l/g;
        x=0;
        for(i=0; i<l; i++)
        {
            if((i+1)%a==0)
            {
                y=i;
                for(j=y; j>=x; j--) printf("%c",s[j]);
                x=y+1;
            }
        }
        printf("\n");
    }
   // return 0;
}
