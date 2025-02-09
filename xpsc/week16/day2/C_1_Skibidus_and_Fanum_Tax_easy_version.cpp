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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll b;
    cin >> b;
    vector<vector<bool> > dp(n, vector<bool>(2, false));
    dp[0][0] = true;
    dp[0][1] = true;

    for (int i = 1; i < n; i++)
    {
        for (int prev = 0; prev < 2; prev++)
        {
            if (!dp[i - 1][prev])
                continue;
            ll prevVal = (prev == 0 ? a[i - 1] : (b - a[i - 1]));
            ll currVal0 = a[i];
            ll currVal = b - a[i];
            if (prevVal <= currVal0)
                dp[i][0] = true;
            if (prevVal <= currVal)
                dp[i][1] = true;
        }
    }

    if (dp[n - 1][0] || dp[n - 1][1])
        yes;
    else
        no;
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
