#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k > n)
        {
            cout << -1 << endl;
            continue;
        }

        vector<vector<int>> v(k);
        for (int i = 0; i < n; i++)
        {
            v[i % k].push_back(i + 1);
        }

        bool invalid = false;
        for (int i = 0; i < k; i++)
        {
            if (v[i].size() == 1)
            {
                cout << -1 << endl;
                invalid = true;
                break;
            }
        }
        if (invalid)
            continue;

        vector<int> p(n + 1);
        for (int i = 0; i < k; i++)
        {
            int sz = v[i].size();
            for (int j = 0; j < sz; j++)
            {
                p[v[i][j]] = v[i][(j + 1) % sz];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << p[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
