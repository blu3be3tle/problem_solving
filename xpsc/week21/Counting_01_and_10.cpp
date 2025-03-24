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
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll i = 0; i <= n / 2; i++)
            ans += i * (n - i) + 1;
        cout << ans << endl;
    }
    return 0;
}
