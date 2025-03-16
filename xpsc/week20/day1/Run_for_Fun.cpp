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
    int x, y;
    cin >> x >> y;
    if (x >= y)
        cout << 0;
    else if (x == 1)
        cout << 1;
    else
        cout << y / x;
    return 0;
}
