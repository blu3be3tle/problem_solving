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

int main()
{
    fastIO;
    tc
    {
        int h, l, w;
        cin >> h >> l >> w;
        int sq = 2 * (h * l + h * w + l * w);
        cout << ceil(1000 / sq) << endl;
    }
    return 0;
}
