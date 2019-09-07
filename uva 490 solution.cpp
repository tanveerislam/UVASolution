#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<cstring>

using namespace std;

char a[150][150];

int main()
{
    int m,n,i,j,k,l,c,max;
    for(i=0; i<102; i++)
        for(j=0; j<102; j++)
            a[i][j]=' ';
    c=0;
    max=0;
    while(scanf("%s",a[c])==1)
    {
        l=strlen(a[c]);
        if(l>max) max=l;
        c++;
    }
    for(i=0;i<max;i++)
    {
        for(j=c-1;j>=0;j--) printf("%c",a[j][i]);
        printf("\n");
    }
    return 0;
}
