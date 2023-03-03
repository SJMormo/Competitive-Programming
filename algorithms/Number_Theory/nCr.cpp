#include <bits/stdc++.h>
using namespace std;

long long nCr (long long n, long long r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    while (r) {
        p *= n;
        k *= r;
        long long gcd = __gcd(p, k);
        p /= gcd;
        k /= gcd;
        --n;
        --r;
    }

    return p;
}

int main()
{
    cout << nCr(10, 0);

    return 0;
}
