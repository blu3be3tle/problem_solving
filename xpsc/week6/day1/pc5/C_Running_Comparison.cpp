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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] <= 2 * a[i] && a[i] <= 2 * b[i])
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}