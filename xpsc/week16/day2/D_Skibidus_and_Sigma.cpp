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

struct aData
{
    ll s;
    ll p;
};

bool cmp(const aData &a, const aData &b)
{
    return a.s > b.s;
}

int main()
{
    fastIO;
    tc
    {
        int n, m;
        cin >> n >> m;
        vector<aData> a(n);
        for (int i = 0; i < n; i++)
        {
            ll sum = 0, prefixSum = 0;
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                sum += x;
                prefixSum += sum;
            }
            a[i].s = sum;
            a[i].p = prefixSum;
        }

        sort(a.begin(), a.end(), cmp);

        ll cumulative = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += a[i].p + m * cumulative;
            cumulative += a[i].s;
        }
        cout << ans << endl;
    }

    return 0;
}
