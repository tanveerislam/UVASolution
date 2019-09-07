#include<bits/stdc++.h>

#include<algorithm>

using namespace std;

int a[100];
int main()
{
    int m,n,i,j,s;
    double x,y,z;
    while(scanf("%d",&n)==1&&n)
    {
        m=((n-1)*n)/2;
        x=m;
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,a+n);
        s=0;
        for(i=1;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(__gcd(a[i],a[j])==1) s++;
            }
        }
        if(s)
        {
            y=s;
            z=sqrt((6*x)/y);
            printf("%6lf\n",z);
        }
        else  printf("No estimate for this data set.\n");
    }
    return 0;
}
