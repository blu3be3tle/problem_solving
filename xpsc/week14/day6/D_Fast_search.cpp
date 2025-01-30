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
    int n;
    cin >> n;

    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    int k;
    cin >> k;

    vector<int> ans;
    ans.reserve(k);

    for (int i = 0; i < k; ++i)
    {
        long long l, r;
        cin >> l >> r;

        auto lower = lower_bound(a.begin(), a.end(), l) - a.begin();

        auto upper = upper_bound(a.begin(), a.end(), r) - a.begin();

        ans.push_back(upper - lower);
    }

    for (auto count : ans)
    {
        cout << count << ' ';
    }

    return 0;
}