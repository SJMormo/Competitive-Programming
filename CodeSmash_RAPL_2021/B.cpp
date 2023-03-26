#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> pos;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 0;
    set<int> st;
    for (int i = 0; i < n; i++) {
        if (*st.find(v[i])) {
            st.erase(v[i]);
        }
        pos[v[i]] = i;
        int l = v[i] - (k - 1);
        int r = v[i] + (k - 1);
        int curr = -1;
        vector<int> del;

        for (auto it : st) {
            // cout << "it " << it << endl;
            if (it >= l and it <= r) {
                curr = max(curr, pos[it]);
                // cout << "kih?" << endl;
            }
        }
        // cout << "curr " << curr << endl;
        for (auto it : st) {
            if (pos[it] <= curr) {
                del.push_back(it);
            }
        }

        // cout << "del " << del.size() << endl;
        for (int i = 0; i < del.size(); i++)
            st.erase(del[i]);

        st.insert(v[i]);
        // cout << "st " << st.size() << '\n';
        ans += st.size() - 1;
    }
    cout << ans << '\n';

}

int main()
{
    fastio();

    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}
