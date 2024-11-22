#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, x, ans = 0;
        cin >> a >> b >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if ((b + x) <= a)
            {
                ans += x;
            }
            else
            {
                ans += a;
            }
        }
        ans += (b - 1);
        cout << ans << endl;
    }

    return 0;
}
