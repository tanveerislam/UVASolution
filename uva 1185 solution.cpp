#include<iostream>
#include<cstdio>
using namespace std;
long long a[100000];
int main()
{
    long long m,t,i,j,k,l,c;
    double n;
    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>a[i];
        n=(double)a[i];
        c=1;
        for(j=n-1;j>0;j--)
        {
            while(n>=10.0)
            {
                c++;
                n/=10.0;
            }
            n*=j;
        }
        cout<<c<<endl;
    }
    return 0;
}
