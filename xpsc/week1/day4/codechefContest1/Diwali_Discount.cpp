#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
typedef long long ll;
using namespace std;

int main()
{
    fastIO;
    ll x, y;
    cin >> x >> y;
    if (x > y)
    {
        cout << x - y << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}