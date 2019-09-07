#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char input[50];
    unsigned long long int num1,num2,res,list[10000];
    int a,b,i,order[50],temp,j,chain,m,flg,p,t=0;
    while (scanf("%s",&input)==1 && strcmp(input,"0")!=0)
    {
        printf("Original number was %s\n",input);
        list[0]=atoi(input);
        j=strlen(input)-1;
        for(i=0; i<strlen(input); i++)order[i]=(int)input[i]-48;
        for(chain=1;; chain++)
        {
            for(a=1; a<=j; ++a)
            {
                for(b=j; b>=a; --b)
                {
                    if(order[b-1]>order[b])
                    {
                        temp=order[b-1];
                        order[b-1]=order[b];
                        order[b]=temp;
                    }
                }
            }
            num2=0;
            for(a=0; a<=j; a++)num2=num2*10+order[a];
            for(a=1; a<=j; ++a)
            {
                for(b=j; b>=a; --b)
                {
                    if(order[b-1]<order[b])
                    {
                        temp=order[b-1];
                        order[b-1]=order[b];
                        order[b]=temp;
                    }
                }
            }
            num1=0;
            for(a=0; a<=j; a++)num1=num1*10+order[a];
            res=num1-num2;
            list[chain]=res;
            printf("%llu - %llu = %llu\n",num1,num2,res);
            flg=0;
            for(p=0; p<chain; p++)
            {
                if(list[p]==res)
                {
                    flg=1;
                    break;
                }
            }
            if(flg)break;
            for(m=0;; m++)
            {
                order[m]=res%10;
                res=res/10;
                if(res==0)
                {
                    j=m;
                    break;
                }
            }
        }
        printf("Chain length %d\n\n",chain);
        for(a=0; a<=chain; a++)list[a]=0;
    }
    return 0;
}
