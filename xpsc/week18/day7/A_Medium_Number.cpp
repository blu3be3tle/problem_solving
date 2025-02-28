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
        int a, b, c;
        cin >> a >> b >> c;

        if ((a < b && a > c) || (a > b && a < c))
            cout << a << endl;
        if ((b < a && b > c) || (b > a && b < c))
            cout << b << endl;
        if ((c > b && c < a) || (c < b && c > a))
            cout << c << endl;
    }
    return 0;
}
