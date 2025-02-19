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
        string s;
        cin >> n >> s;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[0])
                ans = max(ans, i + 1);
            if (s[i] == s[n - 1])
                ans = max(ans, n - i);
        }
        cout << ans << endl;
    }
    return 0;
}
