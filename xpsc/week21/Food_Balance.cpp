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

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (abs(a - b) > abs(c - d))
        cout << "Second";
    else if (abs(a - b) < abs(c - d))
        cout << "First";
    else
        cout << "Both";
    return 0;
}
