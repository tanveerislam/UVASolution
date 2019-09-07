#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[1000];
int main()
{
    int m,n,i,j,k,l;

    cin>>n;
    {
        getchar();
        for(i=1; i<=n; i++)
        {
            while(gets(a)!='\0')
            {
                l=strlen(a);
                if(l==0) break;
                for(j=0; j<l; j++)
                {
                    if(a[j]=='0') cout<<"O";
                    else if(a[j]=='1') cout<<"I";
                    else if(a[j]=='2') cout<<"Z";
                    else if(a[j]=='3') cout<<"E";
                    else if(a[j]=='4') cout<<"A";
                    else if(a[j]=='5') cout<<"S";
                    else if(a[j]=='6') cout<<"G";
                    else if(a[j]=='7') cout<<"T";
                    else if(a[j]=='8') cout<<"B";
                    else if(a[j]=='9') cout<<"P";
                    else cout<<a[j];
                }
                cout<<endl;
            }
            if(i!=n) cout<<endl;
        }
    }

    return 0;
}
