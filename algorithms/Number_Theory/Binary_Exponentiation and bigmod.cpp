#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

long long add(long long a, long long b)
{
    return ((a % mod) + (b % mod) + mod) % mod;
}

long long mul(long long a, long long b)
{
    return ((a % mod) * (b % mod)) % mod;
}

long long binpow(long long a, long long b)
{
    a %= mod;
    long long res = 1;

    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

long long inv(long long a)
{
    return binpow(a, mod - 2);
}

long long divide(long long a, long long b)
{
    return mul(a, inv(b));
}

int main()
{
    cout << binpow(5, 17);

    return 0;
}
