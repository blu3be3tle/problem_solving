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

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> freq;
    int found = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
        if (freq[a[i]] >= 2)
        {
            found = a[i];
        }
    }

    if (found != -1)
    {
        cout << 1 << endl
             << found << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    fastIO;
    tc
    {
        solve();
    }
    return 0;
}