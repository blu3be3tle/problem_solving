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

int main()
{
    fastIO;
    tc
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), prefix(n + 1);
        for (auto &x : a)
            cin >> x;

        sort(a.rbegin(), a.rend());

        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i - 1];
        }

        for (int i = 0; i < q; i++)
        {
            int k, ans = -1;
            cin >> k;
            auto it = lower_bound(prefix.begin(), prefix.end(), k);
            if (it != prefix.end())
            {
                ans = it - prefix.begin();
            }
            cout << ans << endl;
        }
    }
    return 0;
}