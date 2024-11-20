#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    fastIO;
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    ll ans = 0;
    multiset<ll> ms;
    while (r < n)
    {
        ms.insert(a[r]);
        ll mn = *ms.begin(), mx = *ms.rbegin();
        if (mx - mn <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                mn = *ms.begin(), mx = *ms.rbegin();
                if (mx - mn <= k)
                {
                    break;
                }
                ms.erase(ms.find(a[l]));
                l++;
            }
            mn = *ms.begin(), mx = *ms.rbegin();
            if (mx - mn <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}