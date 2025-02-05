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

int longestNonDec(const vector<ll> &a)
{
    int n = a.size();
    int best = 1, streak = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
            streak++;
        else
            streak = 1;
        best = max(best, streak);
    }
    return best;
}

int main()
{
    fastIO;
    tc
    {
        int n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = longestNonDec(a);
        for (int i = 0; i < n; i++)
        {
            vector<ll> b = a;
            b[i] = b[i] * x;
            ans = max(ans, longestNonDec(b));
        }

        cout << ans << endl;
    }

    return 0;
}
