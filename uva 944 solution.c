#include <stdio.h>
#define MAX 100000
unsigned long long int happy[MAX];
void preCalHappy()
{
    unsigned long long int i,j,k,temp,hold,sum;
    for(i=1; i<=99999; i++)
    {
        temp=i;
        k=1;
        for(j=1; j<=10; j++)
        {
            if(temp==1)
            {
                happy[i]=k;
                break;
            }
            k++;
            hold=temp;
            sum=0;
            while(hold>=10)
            {
                sum+=(hold%10)*(hold%10);
                hold=hold/10;
            }
            sum+=(hold%10)*(hold%10);
            temp=sum;

        }

    }

}

int main()
{
    preCalHappy();
    unsigned long long int input1,input2,i,j,temp1,temp2,m;
    m=0;
    while (scanf("%llu %llu",&input1,&input2)==2)
    {
        if(m!=0)printf("\n");
        m=1;
        if(input1>input2)
        {
            temp1=input1;
            temp2=input2;
            input1=temp2;
            input2=temp1;
        }
        for(i=input1; i<=input2; i++)
        {
            if(happy[i])printf("%llu %llu\n",i,happy[i]);

        }

    }

    return 0;
}
