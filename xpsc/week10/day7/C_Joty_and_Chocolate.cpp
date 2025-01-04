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

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    fastIO;

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll x = (n / a) * p, y = (n / b) * q, overlap = (n / LCM(a, b));
    ll ans = ((x + y) - (overlap * (p + q))) + (overlap * max(p, q));

    cout << ans << endl;

    return 0;
}