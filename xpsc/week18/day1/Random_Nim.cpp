#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define tc    \
    ll t = 1; \
    cin >> t; \
    while (t--)
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int mod = 1e9 + 7;

ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = res * a;
        }
        res %= mod;
        a = a * a;
        a %= mod;
        b >>= 1;
    }
    return res;
}
inline int multiply(ll x, ll y)
{
    return ((x * 1ll * y) % mod);
}
inline int inverse(ll x)
{
    return binpow(x, mod - 2);
}

int main()
{
    fastIO;
    tc
    {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << multiply(d + 1, inverse(2 * d)) << endl;
    }
    return 0;
}
