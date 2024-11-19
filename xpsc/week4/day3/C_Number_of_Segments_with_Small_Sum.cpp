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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    ll sum = 0;
    ll ans = 0;

    for (int r = 0; r < n; r++)
    {
        sum += a[r];

        while (sum > k && l <= r)
        {
            sum -= a[l];
            l++;
        }

        ans += (r - l + 1);
    }

    cout << ans << endl;

    return 0;
}
