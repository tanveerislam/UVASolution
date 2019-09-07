#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[1500];
    long m,n,i,j,k,l,s1,s2;
    while(gets(a))
    {
        if(strcmp(a,"0")==0) break;
        l=strlen(a);
        s1=s2=0;
        for(i=0;i<l;i++)
        {
            if(i%2==0) s1=s1+(a[i]-'0');
            else if(i%2==1) s2=s2+(a[i]-'0');
        }
        j=abs(s1-s2);
        if(!j||j%11==0) printf("%s is a multiple of 11.\n",a);
        else printf("%s is not a multiple of 11.\n",a);
    }
    return 0;
}
/*an be evenly divided by" mean the same thing
The Divisibility Rules

These rules let you test if one number is divisible by another, without having to do too much calculation!
Divisible by:	If:	Examples:
2	The last digit is even (0,2,4,6,8)	128 is
129 is not
3	The sum of the digits is divisible by 3

381 (3+8+1=12, and 12÷3 = 4) Yes

217 (2+1+7=10, and 10÷3 = 3 1/3) No
4	The last 2 digits are divisible by 4

1312 is (12÷4=3)
7019 is not
5	The last digit is 0 or 5	175 is
809 is not
6	The number is divisible by both 2 and 3	114 (it is even, and 1+1+4=6 and 6÷3 = 2) Yes

308 (it is even, but 3+0+8=11 and 11÷3 = 3 2/3) No
7	If you double the last digit and subtract it from the rest of the number and the answer is:

    0, or
    divisible by 7

(Note: you can apply this rule to that answer again if you want)

672 (Double 2 is 4, 67-4=63, and 63÷7=9) Yes

905 (Double 5 is 10, 90-10=80, and 80÷7=11 3/7) No
8	The last three digits are divisible by 8

109816 (816÷8=102) Yes

216302 (302÷8=37 3/4) No
9	The sum of the digits is divisible by 9

(Note: you can apply this rule to that answer again if you want)

1629 (1+6+2+9=18, and again, 1+8=9) Yes

2013 (2+0+1+3=6) No
10	The number ends in 0

220 is
221 is not
11

If you sum every second digit and then subtract all other digits and the answer is:

    0, or
    divisible by 11



1364 ((3+4) - (1+6) = 0) Yes

3729 ((7+9) - (3+2) = 11) Yes

25176 ((5+7) - (2+1+6) = 3) No
12	The number is divisible by both 3 and 4

648
(By 3? 6+4+8=18 and 18÷3=6 Yes.
By 4? 48÷4=12 Yes) Yes

524
(By 3? 5+2+4=11, 11÷3= 3 2/3 No.
Don't need to check by 4.) No*/

