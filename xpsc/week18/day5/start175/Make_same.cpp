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
        int n;
        string x, y, z;
        cin >> n >> x >> y >> z;
        int c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (x[i] == '0')
                c1++;
            if (y[i] == '0')
                c2++;
            if (z[i] == '0')
                c3++;
        }
        int total0 = c1 + c2 + c3;

        if (total0 == 0 || total0 == 3 * n)
        {
            cout << 0 << endl;
            continue;
        }
        if (total0 != 0 && total0 != n && total0 != 2 * n && total0 != 3 * n)
        {
            cout << -1 << endl;
            continue;
        }

        if (total0 == n)
        {
            int x1 = n - c1, x2 = n - c2, x3 = n - c3;
            cout << min(x1, min(x2, x3)) << endl;
        }
        else if (total0 == 2 * n)
        {
            int x1 = c1, x2 = c2, x3 = c3;
            cout << min(x1, min(x2, x3)) << endl;
        }
    }
    return 0;
}
