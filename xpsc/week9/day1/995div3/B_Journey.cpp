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
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll sum = a + b + c;
        ll cycles = n / sum;
        ll dist = cycles * sum;
        ll days = cycles * 3;

        if (dist >= n)
        {
            cout << days << endl;
            continue;
        }

        if (dist + a >= n)
        {
            cout << days + 1 << endl;
        }
        else if (dist + a + b >= n)
        {
            cout << days + 2 << endl;
        }
        else
        {
            cout << days + 3 << endl;
        }
    }
    return 0;
}
