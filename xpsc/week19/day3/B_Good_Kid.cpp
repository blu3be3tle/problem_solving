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
        vector<int> a(n);
        int add = 0, ans = 1, min = INT_MAX;
        for (auto &x : a)
        {
            cin >> x;
        }

        int minVal = min_element(a.begin(), a.end()) - a.begin();
        a[minVal]++;

        for (auto &x : a)
        {
            ans *= x;
        }
        cout << ans << endl;
    }
    return 0;
}
