/*#10633 - Rare Easy Problem
Solved By:	wesley
Theory Difficulty:	easy
Coding Difficulty:	trivial
Algorithms Used:	math
Solution Description: 	First, note that M is (N div 10) ("div" being integer division).

N-M is then approximately 9N/10.
Given that (N div 10) <= (N / 10), we know that (N-M) <= 9N/10.
 Also, the difference between (N div 10) and (N / 10) is at most 10.

Let X = N-M.
 We can a range of numbers [10X/9 + 20, 10X/9 - 20] and test each one to see if it is a possible solution.

A range this wide is just for safety.
You definitely don't need to have a range that wide, and you can actually prove that if there are multiple
solutions, there are at most two solutions and the difference between them is 1.

Unsigned 64-bit integers make this problem easier,
but you can manage with signed 64-bit integers if you do (X + X/9) rather than (10*X) / 9      */
#include<stdio.h>
int main()
{
    unsigned long long int n,i,j,k,l;
    while(scanf("%llu",&n)==1&&n)
    {
        i=(n*10)/9;
        if(n%9==0) printf("%llu %llu\n",i-1,i);
        else printf("%llu\n",i);
    }
    return 0;
}
