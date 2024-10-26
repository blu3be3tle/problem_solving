#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
typedef long long ll;
using namespace std;

ll pref(ll n)
{

    return (n / 2) * ((n / 2) + 1) + (n % 2) * ((n / 2) + 1);
}

int main()
{
    fastIO;
    ll n, q;
    cin >> n >> q;

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << pref(r) - pref(l - 1) << endl;
    }

    return 0;
}