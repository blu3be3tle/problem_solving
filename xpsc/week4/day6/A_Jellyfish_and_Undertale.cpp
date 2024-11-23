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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, ans = 0;
        cin >> a >> b >> n;
        vector<int> vec(n);
        if (b >= a)
        {
            ans = a;
            b = a;
        }
        else
            ans = b;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] + 1 <= a)
                ans += vec[i];
            else
                ans += a - 1;
        }
        cout << ans << endl;
    }

    return 0;
}
