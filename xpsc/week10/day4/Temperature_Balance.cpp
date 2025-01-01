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
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;

        ll prefixSum = 0;
        ll totalOps = 0;

        for (int i = 0; i < n - 1; i++)
        {
            prefixSum += a[i];
            totalOps += abs(prefixSum);
        }

        cout << totalOps << endl;
    }

    return 0;
}