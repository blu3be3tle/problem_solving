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
        ll n, m;
        cin >> n >> m;

        set<ll> a;
        a.insert(n);

        for (int i = 0; i < 63; i++)
        {
            ll val = (1LL << i);

            if ((val | n) <= m)
                a.insert(val | n);
        }

        if (a.size() == 1)
        {
            cout << -1 << endl;
            continue;
        }

        cout << a.size() << endl;
        for (auto e : a)
        {
            cout << e << ' ';
        }
        cout << endl;
    }
    return 0;
}
