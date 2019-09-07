#include<stdio.h>
#include<string.h>
char a[1000];
int main()
{
    int m,n,i,j,k,l;
    while(gets(a))
    {
        l=strlen(a);
        k=1;
        for(i=0;i<l;i++)
        {
            if(a[i]!=a[l-1-i])
            {
                k=0;
                break;
            }
        }
        j=0;
        for(i=0;i<l;i++)
        {
            if(a[i]=='A'&&a[l-1-i]=='A') j=1;
            else if(a[i]=='E'&&a[l-i-1]=='3'||a[i]=='3'&&a[l-1-i]=='E') j=1;
            else if(a[i]=='H'&&a[l-1-i]=='H') j=1;
            else if(a[i]=='I'&&a[l-1-i]=='I') j=1;
            else if(a[i]=='L'&&a[l-i-1]=='J'||a[i]=='J'&&a[l-1-i]=='L') j=1;
            else if(a[i]=='M'&&a[l-1-i]=='M') j=1;
            else if(a[i]=='O'&&a[l-1-i]=='O') j=1;
            else if(a[i]=='T'&&a[l-1-i]=='T') j=1;
            else if(a[i]=='U'&&a[l-1-i]=='U') j=1;
            else if(a[i]=='V'&&a[l-1-i]=='V') j=1;
            else if(a[i]=='W'&&a[l-1-i]=='W') j=1;
            else if(a[i]=='X'&&a[l-1-i]=='X') j=1;
            else if(a[i]=='Y'&&a[l-1-i]=='Y') j=1;
            else if(a[i]=='8'&&a[l-1-i]=='8') j=1;
            else if(a[i]=='1'&&a[l-1-i]=='1') j=1;
            else if(a[i]=='S'&&a[l-i-1]=='2'||a[i]=='2'&&a[l-1-i]=='S') j=1;
            else if(a[i]=='Z'&&a[l-i-1]=='5'||a[i]=='5'&&a[l-1-i]=='Z') j=1;
            else
            {
                j=0;
                break;
            }
        }
        if(k&&j) printf("%s -- is a mirrored palindrome.\n\n",a);
        else if(!k&&j) printf("%s -- is a mirrored string.\n\n",a);
        else if(!k&&!j) printf("%s -- is not a palindrome.\n\n",a);
        else if(k&&!j) printf("%s -- is a regular palindrome.\n\n",a);
    }
    return 0;
}
