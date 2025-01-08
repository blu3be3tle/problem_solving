#include <bits/stdc++.h>
using namespace std;
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
const int MOD = 1e9 + 7;

int main()
{
    fastIO;
    tc
    {
        int n, ans = 1;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            ans = (1LL * ans % MOD * i % MOD) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}