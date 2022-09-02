#include <bits/stdc++.h>
using namespace std;

void primes(int n)
{
    vector<int> prime(n + 1, 1); // prime[1] are the primes

    for (int i = 2; i <= n; i++)
    {
        if (!prime[i]) continue;

        for (int j = i * i; j <= n; j += i)
        {
            prime[j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
        if (prime[i]) cout << i << '\n';
}

int main()
{
    int n;
    cin >> n;

    primes(n);

    return 0;
}
