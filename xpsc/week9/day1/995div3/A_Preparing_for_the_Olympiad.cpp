#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int m = 0, s = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] - b[i + 1] > 0)
        {
            m += a[i];
            s += b[i + 1];
        }
    }
    m += a[n - 1];
    cout << m - s << endl;
}

int main()
{
    fastIO;
    tc
    {
        solve();
    }
    return 0;
}
