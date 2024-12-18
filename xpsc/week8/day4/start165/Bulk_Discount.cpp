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

int main()
{
    fastIO;
    tc
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cost = 0;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            ll discount = max(a[i] - i, 0);
            if (discount < 0)
                discount = 0;
            cost += discount;
        }   
        cout << cost << endl;
    }
    return 0;
}
