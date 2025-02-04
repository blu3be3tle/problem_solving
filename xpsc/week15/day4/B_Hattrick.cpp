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
        char a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;

        if (a == 'W' && b == 'W' && c == 'W')
            yes;
        else if (b == 'W' && c == 'W' && d == 'W')
            yes;
        else if (c == 'W' && d == 'W' && e == 'W')
            yes;
        else if (d == 'W' && e == 'W' && f == 'W')
            yes;
        else
            no;
    }
    return 0;
}
