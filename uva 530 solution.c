#include <stdio.h>
int main()
{
    long int input1,input2,i,j,k,res;
    while(scanf("%ld %ld",&input1,&input2)==2 && !(input1==0 && input2==0) )
    {
        if(input2>input1/2)input2=input1-input2;
        res=1;
        for(i=input1,j=1; i>input2,j<=input2; i--,j++)
        {
            res=res*i;
            res=res/j;
        }
        printf("%ld\n",res);
    }
    return 0;
}
