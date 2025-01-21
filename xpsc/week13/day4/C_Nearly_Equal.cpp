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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int ans = INT_MAX;

        for (int i = 0; i <= n - m; i++)
        {
            int count = 0;
            for (int j = 0; j < m; j++)
            {
                if (a[i + j] != b[j])
                    count++;
            }
            ans = min(ans, count);
        }

        cout << ans << endl;
    }
    return 0;
}
