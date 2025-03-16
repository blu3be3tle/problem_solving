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
        int n, c;
        cin >> n >> c;

        vector<int> a(5);

        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'A']++;
        }

        sort(a.begin(), a.end());

        int ans = 0, count = 0, lastCost = 0;

        for (int i = 0; i < 5; i++)
        {
            count += a[i];

            int cost = (count * (count + 1)) / 2;

            if (cost - lastCost <= c)
                ans += cost - lastCost;
            else
                ans += c;

            lastCost = cost;
        }
        cout << ans << endl;
    }
    return 0;
}
