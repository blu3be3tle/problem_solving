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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    for (int i = 0; i < q; i++)
    {
        int ans = n, l = 0, r = n - 1, key, mid;
        cin >> key;

        while (l <= r)
        {
            mid = (l + r) / 2;

            if (key <= a[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;                                
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}
