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
const ll MOD = 998244353;

ll modExp(ll base, ll exp, ll mod)
{
    ll result = 1;

    while (exp)
    {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main()
{
    fastIO;
    tc
    {
        ll n;
        cin >> n;

        if (n % 2 == 1)
            cout << modExp(2, n - 1, MOD) << endl;
        else
            cout << (3 * modExp(2, n - 2, MOD)) % MOD << endl;
    }
    return 0;
}
