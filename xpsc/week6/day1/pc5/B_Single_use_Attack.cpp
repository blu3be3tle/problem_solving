#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;

        int a = (h + x - 1) / x;
        int b = 1 + (h - y + x - 1) / x;
        int ans = min(b, a);

        cout << ans << endl;
    }
    return 0;
}