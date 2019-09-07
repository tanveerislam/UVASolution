#include <iostream>
#include <climits>

using namespace std;

#define N 100+2 //5000000 + 2

int factorSum[N];
bool isPrime[N];
int cumDePrime[N];

void init()
{
    // factorSum
    for (int i = 0; i < N; ++i)
        factorSum[i] = 0;
    // isPrime
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; ++i)
        isPrime[i] = true;
    // sieve
    for (int i = 2; i < N; ++i)
    {
        // primes
        if (isPrime[i])
        {
            factorSum[i] += i;
            if (i < INT_MAX / 2)
                for (int j = 2 * i; j < N; j += i)
                {
                    factorSum[j] += i;
                    isPrime[j] = false;
                }
        }
        cumDePrime[i] = cumDePrime[i - 1];
        if (isPrime[factorSum[i]])
            ++cumDePrime[i];
    }
}

int main()
{
    init();
    int n, m;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        cin >> m;
       // cout << cumDePrime[m] << endl;
        cout << cumDePrime[m] - cumDePrime[n - 1] << endl;
    }
    return 0;
}
