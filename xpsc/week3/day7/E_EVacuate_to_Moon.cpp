#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        ll n, m, h;
        cin >> n >> m >> h;

        ll a[n], b[m];
        int c1 = 0, c2 = 0, co = 0, c3 = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        sort(a, a + n, greater<ll>());
        sort(b, b + m, greater<ll>());
        ll ans = 0;
        for (int i = 0; i < min(m, n); i++)
        {
            ans += min(a[i], b[i] * h);
        }

        cout << ans << endl;
    }
}