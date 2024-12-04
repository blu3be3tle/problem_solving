#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'

int main()
{
    fastIO;

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> v(n), c(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        vector<pair<int, int>> coins;
        for (int i = 0; i < n; i++)
        {
            coins.push_back(make_pair(v[i], c[i]));
        }

        sort(coins.rbegin(), coins.rend());

        int total = 0;
        int types = 0;

        for (const auto &coin : coins)
        {
            int value = coin.first;
            int count = coin.second;

            if (total >= x)
            {
                break;
            }

            int mx = min((x - total + value - 1) / value, count);

            total += mx * value;
            types++;
        }

        if (total >= x)
        {
            cout << types << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
