#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
using namespace std;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int m = x * y;
        int n = z * 24 * 60;

        if (m <= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}