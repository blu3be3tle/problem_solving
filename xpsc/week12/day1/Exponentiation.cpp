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
const int MOD = 1e9 + 7;

int main()
{
    fastIO;
    tc
    {
        int x, n;
        cin >> x >> n;
        int ans = 1 % MOD;
        while (n)
        {
            if (n & 1)
            {
                ans = (1LL * ans % MOD * x % MOD) % MOD;
            }
            x = 1LL * x * x % MOD;
            n >>= 1;
        }
        cout << ans << endl;
    }
    return 0;
}