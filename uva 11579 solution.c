#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,m,j,k,l;
    double a,b,c,d,ar1[20000],ar2[20000],s,A,temp,max;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++) scanf("%lf",&ar1[j]);
        for(j=1;j<m;j++)
        {
            for(k=0;k<j;k++)
            {
                if(ar1[k]>ar1[j])
                {
                    temp=ar1[k];
                    ar1[k]=ar1[j];
                    ar1[j]=temp;
                }
            }
        }
        l=0;
        for(j=m-1;j>=2;j--)
        {
            a=ar1[j];
            b=ar1[j-1];
            c=ar1[j-2];
            if(a+b<=c||b+c<=a||c+a<=b)
            {
                ar2[l]=0.0;
                l++;
            }
            else
            {
                s=(a+b+c)/2;
                A=sqrt(s*(s-a)*(s-b)*(s-c));
                ar2[l]=A;
                l++;
            }
        }
        max=ar2[0];
        for(j=0;j<l;j++)
        {
            if(ar2[j]>max)
            {
                max=ar2[j];
            }
        }
        printf("%.2lf\n",max);
    }
    return 0;
}
