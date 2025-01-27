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
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if ((a * b * c) > (x * x * x))
        cout << "Cuboid";
    else if ((a * b * c) < (x * x * x))
        cout << "Cube";
    else
        cout << "Equal";
    
    return 0;
}
