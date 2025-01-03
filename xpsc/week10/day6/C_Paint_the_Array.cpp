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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll G1 = 0, G2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            G1 = __gcd(G1, a[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            G2 = __gcd(G2, a[i]);
        }

        ll ans = 0;
        bool okay = true;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % G1 == 0)
            {
                okay = false;
            }
        }
        if (okay)
        {
            ans = G1;
        }

        else
        {
            okay = true;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % G2 == 0)
                {
                    okay = false;
                }
            }
            if (okay)
            {
                ans = G2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
