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

int main()
{
    fastIO;
    tc
    {
        int n, m, k;
        cin >> n >> m >> k;

        int minDiff = INT32_MAX;

        for (int l = 1; l <= n; l++)
        {
            for (int j = 1; j <= m; j++)
            {
                int perimeter = 2 * (l + j);
                int diff = abs(perimeter - k);
                if (diff < minDiff)
                {
                    minDiff = diff;
                }
                if (minDiff == 0)
                {
                    break;
                }
            }
            if (minDiff == 0)
            {
                break;
            }
        }

        cout << minDiff << endl;
    }

    return 0;
}
