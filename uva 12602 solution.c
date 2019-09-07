#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[40],c;
    int i,j,k,l;
    scanf("%d",&l);
    fflush(stdin);
    for(i=1;i<=l;i++)
    {
        scanf("%3s-%d",a,&j);
        k=((a[0]-'A')*26*26+(a[1]-'A')*26+(a[2]-'A')*1);
        int t=abs(j-k);
        if(t<=100) printf("nice\n");
        else printf("not nice\n");
    }
    return 0;
}
