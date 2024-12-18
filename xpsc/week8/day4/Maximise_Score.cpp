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

int main()
{
    fastIO;
    tc
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            int m = 0;
            if (i + 1 < n)
                m = max(m, abs(a[i + 1] - a[i]));
            if (i - 1 >= 0)
                m = max(m, abs(a[i - 1] - a[i]));
            ans = min(ans, m);
        }
        cout << ans << endl;
    }
    return 0;
}