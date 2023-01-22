#include <bits/stdc++.h>
using namespace std;

void primeFactors(ll n)
{
    while (n % 2 == 0) {
        cout << 2 << ' ';
        n /= 2;
    }

    for (ll i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << ' ';
            n /= i;
        }
    }

    if (n > 2)
        cout << n << ' ';
}

int main()
{
    primeFactors(10);

    return 0;
}
