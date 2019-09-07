
#include<bits/stdc++.h>
using namespace std;

#define MAX 100000

int isPrime[MAX];
int serial[MAX];
int memo[MAX];

vector<int>primes;

int survivor (int n)
{
    int i, s;
    for (s = 0, i = 1; i <= n; i++) s = (s + primes[n-i]) % i;
    return s+1;
}

void sieve()
{
    int i,j,k,lim;

    for(i=2; i<MAX; i++)isPrime[i] = 1;
    lim = 2;
    for(k=2; k<=sqrt((double)MAX); k++)
    {
        for(j=lim+lim; j<MAX; j=j+lim)isPrime[j] = 0;
        lim++;
        for(; !isPrime[lim]; lim++);
    }

    for(i=1; i<MAX; i++)
    {
        if(isPrime[i]) primes.push_back(i);
    }
}

int main()
{
    sieve();

    int persons,j,k,l;
    while(scanf("%d",&persons)==1 && persons!=0)
    {
        printf("%d\n",survivor(persons));

    }
    return 0;
}
