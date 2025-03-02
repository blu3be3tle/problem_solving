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
        for (auto &x : a)
            cin >> x;

        int l = 0, r = 0, count = 0;
        while (r < n)
        {
            l = r;
            while (r + 1 < n && a[r] == a[r + 1])
            {
                r++;
            }
            if (((a[l - 1] > a[l]) || (l == 0)) && ((a[r] < a[r + 1]) || (r == n - 1)))
            {
                count++;
            }
            r++;
        }
        (count == 1) ? yes : no;
    }
    return 0;
}