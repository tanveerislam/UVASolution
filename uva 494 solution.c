#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int l,i,w=1;
    while(gets(a))
    {
        l=strlen(a);
        int c=0;
        w=1;
        for(i=0;i<l;i++)
        {
            if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
            {
                if(w) c++;
                w=0;
            }
            else w=1;
        }
        printf("%d\n",c);
    }
    return 0;
}
