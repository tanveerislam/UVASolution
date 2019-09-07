#include<bits/stdc++.h>

using namespace std;

int a[20000];

int main()
{
    int m1,m2,n,i,j,k,l;
    while(scanf("%d",&n)==1&&n)
    {
        for(i=0; i<n; i++) scanf("%d",&a[i]);
        m1=a[0];
        m2=a[0];
        for(i=1; i<n; i++)
        {
            if(m1<=0) m1=a[i];
            else
            {
                m1+=a[i];
                if(m2<m1) m2=m1;
            }
        }
        if(m1<=0) printf("Losing streak.\n");
        else
            printf("The maximum winning streak is %d.\n",m2);
    }
    return 0;
}
