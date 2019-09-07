#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i=1;
    while(gets(a))
    {
        if(!strcmp(a,"*")) break;
        else if(!strcmp(a,"Hajj")) printf("Case %d: Hajj-e-Akbar\n",i);
        else if(!strcmp(a,"Umrah")) printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }
    return 0;
}


