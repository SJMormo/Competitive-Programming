#include <bits/stdc++.h>
using namespace std;

void divisors_count(int n)
{
    vector<int> div(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            div[j]++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << div[i] << '\n';
    }
}

int main()
{
    divisors_count(100);

    return 0;
}
