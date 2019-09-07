#include<stdio.h>
int main()
{
    char ch;
    register int m=0,max=131071;
    while((ch=getchar())!=EOF)
    {
        if(ch=='#')
        {
            if(!m) printf("YES\n");
            else printf("NO\n");
            m=0;
        }
        else if(ch!='\n') m=((2*m)+(ch-'0'))%max;
    }
    return 0;
}
