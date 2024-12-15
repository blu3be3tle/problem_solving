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
        ll m, a, b, c;
        cin >> m >> a >> b >> c; 


        ll row1 = min(a, m);
        ll row2 = min(b, m);


        ll remaining1 = m - row1;
        ll remaining2 = m - row2;

        ll totalRemaining = remaining1 + remaining2;

        ll ext = min(c, totalRemaining);


        ll total = row1 + row2 + ext;

        cout << total << endl;
    }

    return 0;
}
