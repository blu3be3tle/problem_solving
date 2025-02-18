#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define endl "\n"

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);   
        for (auto &x : a)
            cin >> x;
        int odd = 0;
        for (int i = 0; i < k; i++)
        {
            if (a[i] & 1)
                odd++;
        }
        int result = (odd > 0) ? 1 : 0;
        for (int i = k; i < n; i++)
        {
            if (a[i - k] & 1)
                odd--;
            if (a[i] & 1)
                odd++;
            if (odd > 0)
                result++;
        }
        cout << result << endl;
    }
    return 0;
}
