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

const int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > a[i - 1])
        {
            int j = i - 1;
            while (j >= 0 && a[i] > a[j])
            {
                count++;
                j--;
            }
            mx = max(mx, count);
            count = 0;
            i = j + 1;
        }
    }
    mx = max(mx, count);
    cout << mx << endl;
}

int32_t main()
{
    fastIO;
    tc
    {
        solve();
    }

    return 0;
}