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
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int medIdx = (n + 1) / 2 - 1;
        ll target = a[medIdx] + 1;
        ll count = 0;
        for (int i = medIdx; i < n; i++)
        {
            if (a[i] < target)
            {
                count += (target - a[i]);
                a[i] = target;
            }
        }
        cout << count << endl;
    }
    return 0;
}
