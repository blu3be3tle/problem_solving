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
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, ans = INT_MAX;
    ll sum = 0;

    for (int r = 0; r < n; r++)
    {
        sum += a[r];

        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }
    }

    cout << (ans == INT_MAX ? -1 : ans) << endl;

    return 0;
}
