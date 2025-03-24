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
        int x, y;
        cin >> x >> y;

        if (x == y)
            cout << x * 2 << endl;
        else if (x > y)
            cout << (y * 2) + (x - y) * 2 - 1 << endl;
        else
            cout << (x * 2) + (y - x) * 2 - 1 << endl;
    }
    return 0;
}
