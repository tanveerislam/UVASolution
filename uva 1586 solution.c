#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j,k,l;
    double s,t,p;
    char a[100000];
    scanf("%d",&n);
    fflush(stdin);
    for(i=1; i<=n; i++)
    {
        scanf("%s",&a);
        if(strcmp(a,"C")==0) printf("%.3lf\n",12.010);
        else if(strcmp(a,"H")==0) printf("%.3lf\n",1.008);
        else if(strcmp(a,"O")==0) printf("%.3lf\n",16.000);
        else if(strcmp(a,"N")==0) printf("%.3lf\n",14.010);
        else
        {
            s=0;
            l=strlen(a);
            p=0;
            for(j=0; j<l; j++)
            {
                if(a[j]>='A'&&a[i]<='Z')
                {
                    m=0;
                    if(a[j]=='C') t=12.01;
                    if(a[j]=='N') t=14.01;
                    if(a[j]=='O') t=16.00;
                    if(a[j]=='H') t=1.008;
                }
                if(m) continue;
                else if(a[j]>='0'&&a[j]<='9')
                {
                    for(k=j; a[k]>='0'&&a[k]<='9'; k++)
                    {
                        p=(p*10)+(a[k]-'0');
                        m=1;
                    }
                    s+=(p*t);
                    p=0;
                }
                 if(a[j+1]>='A'&&a[j+1]<='Z'&&(!m)) s+=t;
            }
            if(!m) s+=t;
            printf("%.3lf\n",s);
        }
    }
    return 0;
}
