#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long m,n,i,j,k,l;
    char ch[1000];
    while(cin>>ch)
    {
        if(strcmp(ch,"#")==0) break;
        l=strlen(ch);
        if(next_permutation(ch,ch+l)) cout<<ch<<endl;
        else cout<<"No Successor"<<endl;
    }
    return 0;
}
