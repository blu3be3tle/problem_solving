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
        int mx = 0;
        int mx2 = 0;
        for (auto &x : a)
        {
            cin >> x;
            if (x > mx)
            {
                mx2 = mx;
                mx = x;
            }
            else if (x > mx2 && x < mx || x == mx)
                mx2 = x;
        }

        for (auto &x : a)
        {
            if (x == mx)
                cout << mx - mx2 << ' ';
            else
                cout << x - mx << " ";
        }
        cout << endl;
    }
    return 0;
}
