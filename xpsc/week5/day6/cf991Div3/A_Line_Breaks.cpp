#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int total = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            total += s[i].length();
            if (total > m)
            {
                break;
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}