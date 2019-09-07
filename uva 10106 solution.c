#include<stdio.h>
#include<string.h>
# define max 550
char s1[max];
char s2[max],s3[max],s4[max];
int res[2*max],res1[2*max];
int main()
{
    int m,n,i,j,k,l,l1,l2,r,c,s,t,m1,r1,mal;
    char x,y;
    while(scanf("%s %s",&s1,&s2)==2)
    {
        if(strcmp(s1,"0")==0||strcmp(s2,"0")==0) printf("0\n");
        else if(strcmp(s1,"1")==0) printf("%s\n",s2);
        else if(strcmp(s2,"1")==0) printf("%s\n",s1);
        else
        {
            l1=strlen(s1);
            l2=strlen(s2);
            l=0;
            for(i=l1-1; i>=0; i--)
            {
                x=s1[i];
                s3[l]=x;
                l++;
            }
            for(i=l1; i<max; i++) s3[i]='0';
            // s3[i]='\0';
            l=0;
            for(i=l2-1; i>=0; i--)
            {
                y=s2[i];
                s4[l]=y;
                l++;
            }
            for(i=l2; i<max; i++) s4[i]='0';
            //s4[i]='\0';
            r=0;
            for(i=0; i<max; i++)
            {
                m=((s3[i]-'0')*(s4[0]-'0'))+r;
                if(m>9)
                {
                    res[i]=m%10;
                    r=m/10;
                }
                else
                {
                    res[i]=m%10;
                    r=m/10;
                }
            }
            for(i=max; i<2*max; i++) res[i]=0;
            t=1;
            for(i=1; i<max; i++)
            {
                for(k=0; k<t; k++) res1[k]=0;
                r=0;
                n=t;
                for(j=0; j<max; j++)
                {
                    m=(s3[j]-'0')*(s4[i]-'0')+r;
                    if(m>9)
                    {
                        res1[n]=m%10;
                        r=m/10;
                    }
                    else
                    {
                        res1[n]=m%10;
                        r=m/10;
                    }
                    n++;
                }
                for(mal=max; mal<2*max; mal++) res1[mal]=0;
                r1=0;
                for(k=0; k<2*max; k++)
                {
                    res[k]=res[k]+res1[k]+r1;
                    m1=res[k];
                    if(m1>9)
                    {
                        res[k]=m1%10;
                        r1=m1/10;
                    }
                    else
                    {
                        res[k]=m1%10;
                        r1=m1/10;
                    }
                }
                t++;
            }
            for(i=(2*max)-1; i>=0; i--)
            {
                if(res[i]!=0)
                {
                    l=i;
                    break;
                }
            }
            if(i==-1) printf("0");
            else for(i=l; i>=0; i--) printf("%d",res[i]);
            printf("\n");
        }
    }
    return 0;
}
